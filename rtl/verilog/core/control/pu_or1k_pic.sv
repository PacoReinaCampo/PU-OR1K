////////////////////////////////////////////////////////////////////////////////
//                                            __ _      _     _               //
//                                           / _(_)    | |   | |              //
//                __ _ _   _  ___  ___ _ __ | |_ _  ___| | __| |              //
//               / _` | | | |/ _ \/ _ \ '_ \|  _| |/ _ \ |/ _` |              //
//              | (_| | |_| |  __/  __/ | | | | | |  __/ | (_| |              //
//               \__, |\__,_|\___|\___|_| |_|_| |_|\___|_|\__,_|              //
//                  | |                                                       //
//                  |_|                                                       //
//                                                                            //
//                                                                            //
//              MPSoC-OR1K CPU                                                //
//              Processing Unit                                               //
//              Wishbone Bus Interface                                        //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2015-2016 by the author(s)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
////////////////////////////////////////////////////////////////////////////////
// Author(s):
//   Paco Reina Campo <pacoreinacampo@queenfield.tech>

`include "pu_or1k_defines.sv"

module pu_or1k_pic #(
  parameter OPTION_PIC_TRIGGER="LEVEL",
  parameter OPTION_PIC_NMI_WIDTH = 0
)
  (
    input clk,
    input rst,

    input [31:0] irq_i,

    output [31:0] spr_picmr_o,
    output [31:0] spr_picsr_o,

    // SPR Bus interface
    input         spr_access_i,
    input         spr_we_i,
    input [15:0]  spr_addr_i,
    input [31:0]  spr_dat_i,
    output        spr_bus_ack,
    output [31:0] spr_dat_o
  );
  // Registers
  reg [31:0] spr_picmr;
  reg [31:0] spr_picsr;

  wire spr_picmr_access;
  wire spr_picsr_access;

  wire [31:0] irq_unmasked;

  assign spr_picmr_o = spr_picmr;
  assign spr_picsr_o = spr_picsr;

  assign spr_picmr_access = spr_access_i & (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PICMR_ADDR));
  assign spr_picsr_access = spr_access_i & (`SPR_OFFSET(spr_addr_i) == `SPR_OFFSET(`OR1K_SPR_PICSR_ADDR));

  assign spr_bus_ack =  spr_access_i;
  assign spr_dat_o   = (spr_access_i & spr_picsr_access) ? spr_picsr :
                       (spr_access_i & spr_picmr_access) ? spr_picmr : 0;

  assign irq_unmasked = spr_picmr & irq_i;

  generate
    genvar irqline;

    if (OPTION_PIC_TRIGGER=="EDGE") begin : edge_triggered
      reg  [31:0] irq_unmasked_r;
      wire [31:0] irq_unmasked_edge;

      always @(posedge clk or posedge rst) begin
        if (rst) begin
          irq_unmasked_r <= 0;
        end else begin
          irq_unmasked_r <= irq_unmasked;
        end
      end

      for(irqline=0;irqline<32;irqline=irqline+1)  begin: picgenerate
        assign irq_unmasked_edge[irqline] = irq_unmasked[irqline] & !irq_unmasked_r[irqline];

        // PIC status register
        always @(posedge clk or posedge rst) begin
          if (rst) begin
            spr_picsr[irqline] <= 0;
          // Set
          end else if (irq_unmasked_edge[irqline]) begin
            spr_picsr[irqline] <= 1;
          // Clear
          end else if (spr_we_i & spr_picsr_access & spr_dat_i[irqline]) begin
            spr_picsr[irqline] <= 0;
          end
        end
      end
    end else if (OPTION_PIC_TRIGGER=="LEVEL") begin : level_triggered
      for(irqline=0;irqline<32;irqline=irqline+1) begin: picsrlevelgenerate
        // PIC status register
        always @(*) begin
          spr_picsr[irqline] = irq_unmasked[irqline];
        end
      end
    end else if (OPTION_PIC_TRIGGER=="LATCHED_LEVEL") begin : latched_level
      for(irqline=0;irqline<32;irqline=irqline+1) begin : piclatchedlevelgenerate
        // PIC status register
        always @(posedge clk or posedge rst) begin
          if (rst) begin
            spr_picsr[irqline] <= 0;
          end else if (spr_we_i && spr_picsr_access) begin
            spr_picsr[irqline] <= irq_unmasked[irqline] | spr_dat_i[irqline];
          end else begin
            spr_picsr[irqline] <= spr_picsr[irqline] | irq_unmasked[irqline];
          end
        end
      end
    end else begin : invalid
      initial begin
        $display("Error - invalid PIC level detection option %s", OPTION_PIC_TRIGGER);
        $finish;
      end
    end
  endgenerate

  // PIC (un)mask register
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      spr_picmr <= {{(32-OPTION_PIC_NMI_WIDTH){1'b0}}, {OPTION_PIC_NMI_WIDTH{1'b1}}};
    end else if (spr_we_i && spr_picmr_access) begin
      spr_picmr <= {spr_dat_i[31:OPTION_PIC_NMI_WIDTH], {OPTION_PIC_NMI_WIDTH{1'b1}}};
    end
  end
endmodule
