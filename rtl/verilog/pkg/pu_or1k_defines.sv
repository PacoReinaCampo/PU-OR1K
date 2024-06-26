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

// ORBIS32 opcodes - top 6 bits

`define OR1K_INSN_WIDTH 32

`define OR1K_RD_SELECT 25:21
`define OR1K_RA_SELECT 20:16
`define OR1K_RB_SELECT 15:11

`define OR1K_IMM_WIDTH 16
`define OR1K_IMM_SELECT 15:0

`define OR1K_ALU_OPC_WIDTH 4
`define OR1K_ALU_OPC_SELECT 3:0

`define OR1K_ALU_OPC_ADD `OR1K_ALU_OPC_WIDTH'h0
`define OR1K_ALU_OPC_ADDC `OR1K_ALU_OPC_WIDTH'h1
`define OR1K_ALU_OPC_SUB `OR1K_ALU_OPC_WIDTH'h2
`define OR1K_ALU_OPC_AND `OR1K_ALU_OPC_WIDTH'h3
`define OR1K_ALU_OPC_OR `OR1K_ALU_OPC_WIDTH'h4
`define OR1K_ALU_OPC_XOR `OR1K_ALU_OPC_WIDTH'h5
`define OR1K_ALU_OPC_MUL `OR1K_ALU_OPC_WIDTH'h6
`define OR1K_ALU_OPC_RESV `OR1K_ALU_OPC_WIDTH'h7
`define OR1K_ALU_OPC_SHRT `OR1K_ALU_OPC_WIDTH'h8
`define OR1K_ALU_OPC_DIV `OR1K_ALU_OPC_WIDTH'h9
`define OR1K_ALU_OPC_DIVU `OR1K_ALU_OPC_WIDTH'ha
`define OR1K_ALU_OPC_MULU `OR1K_ALU_OPC_WIDTH'hb
`define OR1K_ALU_OPC_EXTBH `OR1K_ALU_OPC_WIDTH'hc
`define OR1K_ALU_OPC_EXTW `OR1K_ALU_OPC_WIDTH'hd
`define OR1K_ALU_OPC_CMOV `OR1K_ALU_OPC_WIDTH'he
`define OR1K_ALU_OPC_FFL1 `OR1K_ALU_OPC_WIDTH'hf

`define OR1K_ALU_OPC_SECONDARY_WIDTH 3
`define OR1K_ALU_OPC_SECONDARY_SELECT 8:6

`define OR1K_ALU_OPC_SECONDARY_SHRT_SLL `OR1K_ALU_OPC_SECONDARY_WIDTH'h0
`define OR1K_ALU_OPC_SECONDARY_SHRT_SRL `OR1K_ALU_OPC_SECONDARY_WIDTH'h1
`define OR1K_ALU_OPC_SECONDARY_SHRT_SRA `OR1K_ALU_OPC_SECONDARY_WIDTH'h2
`define OR1K_ALU_OPC_SECONDARY_SHRT_ROR `OR1K_ALU_OPC_SECONDARY_WIDTH'h3

`define OR1K_ALU_OPC_SECONDARY_EXTBH_EXTHS `OR1K_ALU_OPC_SECONDARY_WIDTH'h0
`define OR1K_ALU_OPC_SECONDARY_EXTW_EXTWS `OR1K_ALU_OPC_SECONDARY_WIDTH'h0
`define OR1K_ALU_OPC_SECONDARY_EXTBH_EXTBS `OR1K_ALU_OPC_SECONDARY_WIDTH'h1
`define OR1K_ALU_OPC_SECONDARY_EXTW_EXTWZ `OR1K_ALU_OPC_SECONDARY_WIDTH'h1
`define OR1K_ALU_OPC_SECONDARY_EXTBH_EXTHZ `OR1K_ALU_OPC_SECONDARY_WIDTH'h2
`define OR1K_ALU_OPC_SECONDARY_EXTBH_EXTBZ `OR1K_ALU_OPC_SECONDARY_WIDTH'h3

`define OR1K_COMP_OPC_WIDTH 4
`define OR1K_COMP_OPC_SELECT 24:21
`define OR1K_COMP_OPC_EQ `OR1K_COMP_OPC_WIDTH'h0
`define OR1K_COMP_OPC_NE `OR1K_COMP_OPC_WIDTH'h1
`define OR1K_COMP_OPC_GTU `OR1K_COMP_OPC_WIDTH'h2
`define OR1K_COMP_OPC_GEU `OR1K_COMP_OPC_WIDTH'h3
`define OR1K_COMP_OPC_LTU `OR1K_COMP_OPC_WIDTH'h4
`define OR1K_COMP_OPC_LEU `OR1K_COMP_OPC_WIDTH'h5
`define OR1K_COMP_OPC_GTS `OR1K_COMP_OPC_WIDTH'ha
`define OR1K_COMP_OPC_GES `OR1K_COMP_OPC_WIDTH'hb
`define OR1K_COMP_OPC_LTS `OR1K_COMP_OPC_WIDTH'hc
`define OR1K_COMP_OPC_LES `OR1K_COMP_OPC_WIDTH'hd

`define OR1K_JUMPBRANCH_IMMEDIATE_SELECT 25:0

`define OR1K_SYSTRAPSYNC_OPC_WIDTH 3
`define OR1K_SYSTRAPSYNC_OPC_SELECT 25:23
`define OR1K_SYSTRAPSYNC_OPC_SYSCALL `OR1K_SYSTRAPSYNC_OPC_WIDTH'h0
`define OR1K_SYSTRAPSYNC_OPC_TRAP `OR1K_SYSTRAPSYNC_OPC_WIDTH'h2
`define OR1K_SYSTRAPSYNC_OPC_MSYNC `OR1K_SYSTRAPSYNC_OPC_WIDTH'h4
`define OR1K_SYSTRAPSYNC_OPC_PSYNC `OR1K_SYSTRAPSYNC_OPC_WIDTH'h5
`define OR1K_SYSTRAPSYNC_OPC_CSYNC `OR1K_SYSTRAPSYNC_OPC_WIDTH'h6

`define OR1K_OPCODE_WIDTH 6
`define OR1K_OPCODE_SELECT 31:26

`define OR1K_OPCODE_J {2'b00, 4'h0}
`define OR1K_OPCODE_JAL {2'b00, 4'h1}
`define OR1K_OPCODE_BNF {2'b00, 4'h3}
`define OR1K_OPCODE_BF {2'b00, 4'h4}
`define OR1K_OPCODE_NOP {2'b00, 4'h5}
`define OR1K_OPCODE_MOVHI {2'b00, 4'h6}
`define OR1K_OPCODE_MACRC {2'b00, 4'h6}

//`define OR1K_OPCODE_SYS     {2'b00, 4'h8}
//`define OR1K_OPCODE_TRAP    {2'b00, 4'h8}
//`define OR1K_OPCODE_MSYNC   {2'b00, 4'h8}
//`define OR1K_OPCODE_PSYNC   {2'b00, 4'h8}
//`define OR1K_OPCODE_CSYNC   {2'b00, 4'h8}

`define OR1K_OPCODE_SYSTRAPSYNC {2'b00, 4'h8}
`define OR1K_OPCODE_RFE {2'b00, 4'h9}

`define OR1K_OPCODE_JR {2'b01, 4'h1}
`define OR1K_OPCODE_JALR {2'b01, 4'h2}
`define OR1K_OPCODE_MACI {2'b01, 4'h3}
`define OR1K_OPCODE_LWA {2'b01, 4'hB}
`define OR1K_OPCODE_CUST1 {2'b01, 4'hC}
`define OR1K_OPCODE_CUST2 {2'b01, 4'hD}
`define OR1K_OPCODE_CUST3 {2'b01, 4'hE}
`define OR1K_OPCODE_CUST4 {2'b01, 4'hF}

`define OR1K_OPCODE_LD {2'b10, 4'h0}
`define OR1K_OPCODE_LWZ {2'b10, 4'h1}
`define OR1K_OPCODE_LWS {2'b10, 4'h2}
`define OR1K_OPCODE_LBZ {2'b10, 4'h3}
`define OR1K_OPCODE_LBS {2'b10, 4'h4}
`define OR1K_OPCODE_LHZ {2'b10, 4'h5}
`define OR1K_OPCODE_LHS {2'b10, 4'h6}

`define OR1K_OPCODE_ADDI {2'b10, 4'h7}
`define OR1K_OPCODE_ADDIC {2'b10, 4'h8}
`define OR1K_OPCODE_ANDI {2'b10, 4'h9}
`define OR1K_OPCODE_ORI {2'b10, 4'hA}
`define OR1K_OPCODE_XORI {2'b10, 4'hB}
`define OR1K_OPCODE_MULI {2'b10, 4'hC}
`define OR1K_OPCODE_MFSPR {2'b10, 4'hD}

//`define OR1K_OPCODE_SLLI    {2'b10, 4'hE}
//`define OR1K_OPCODE_SRLI    {2'b10, 4'hE}
//`define OR1K_OPCODE_SRAI    {2'b10, 4'hE}
//`define OR1K_OPCODE_RORI    {2'b10, 4'hE}

`define OR1K_OPCODE_SHRTI {2'b10, 4'hE}

//`define OR1K_OPCODE_SFEQI   {2'b10, 4'hF}
//`define OR1K_OPCODE_SFNEI   {2'b10, 4'hF}
//`define OR1K_OPCODE_SFGTUI  {2'b10, 4'hF}
//`define OR1K_OPCODE_SFGEUI  {2'b10, 4'hF}
//`define OR1K_OPCODE_SFLTUI  {2'b10, 4'hF}
//`define OR1K_OPCODE_SFLEUI  {2'b10, 4'hF}
//`define OR1K_OPCODE_SFGTSI  {2'b10, 4'hF}
//`define OR1K_OPCODE_SFGESI  {2'b10, 4'hF}
//`define OR1K_OPCODE_SFLTSI  {2'b10, 4'hF}
//`define OR1K_OPCODE_SFLESI  {2'b10, 4'hF}

`define OR1K_OPCODE_SFIMM {2'b10, 4'hF}

`define OR1K_OPCODE_MTSPR {2'b11, 4'h0}
`define OR1K_OPCODE_MAC {2'b11, 4'h1}
`define OR1K_OPCODE_MSB {2'b11, 4'h1}

`define OR1K_OPCODE_SWA {2'b11, 4'h3}
`define OR1K_OPCODE_SD {2'b11, 4'h4}
`define OR1K_OPCODE_SW {2'b11, 4'h5}
`define OR1K_OPCODE_SB {2'b11, 4'h6}
`define OR1K_OPCODE_SH {2'b11, 4'h7}

//`define OR1K_OPCODE_ADD     {2'b11, 4'h8}
//`define OR1K_OPCODE_ADDC    {2'b11, 4'h8}
//`define OR1K_OPCODE_SUB     {2'b11, 4'h8}
//`define OR1K_OPCODE_AND     {2'b11, 4'h8}
//`define OR1K_OPCODE_OR      {2'b11, 4'h8}
//`define OR1K_OPCODE_XOR     {2'b11, 4'h8}
//`define OR1K_OPCODE_MUL     {2'b11, 4'h8}

//`define OR1K_OPCODE_SLL     {2'b11, 4'h8}
//`define OR1K_OPCODE_SRL     {2'b11, 4'h8}
//`define OR1K_OPCODE_SRA     {2'b11, 4'h8}
//`define OR1K_OPCODE_ROR     {2'b11, 4'h8}
//`define OR1K_OPCODE_DIV     {2'b11, 4'h8}
//`define OR1K_OPCODE_DIVU    {2'b11, 4'h8}
//`define OR1K_OPCODE_MULU    {2'b11, 4'h8}
//`define OR1K_OPCODE_EXTBS   {2'b11, 4'h8}
//`define OR1K_OPCODE_EXTHS   {2'b11, 4'h8}
//`define OR1K_OPCODE_EXTWS   {2'b11, 4'h8}
//`define OR1K_OPCODE_EXTBZ   {2'b11, 4'h8}
//`define OR1K_OPCODE_EXTHZ   {2'b11, 4'h8}
//`define OR1K_OPCODE_EXTWZ   {2'b11, 4'h8}
//`define OR1K_OPCODE_CMOV    {2'b11, 4'h8}
//`define OR1K_OPCODE_FF1     {2'b11, 4'h8}
//`define OR1K_OPCODE_FL1     {2'b11, 4'h8}

`define OR1K_OPCODE_ALU {2'b11, 4'h8}

//`define OR1K_OPCODE_SFEQ    {2'b11, 4'h9}
//`define OR1K_OPCODE_SFNE    {2'b11, 4'h9}
//`define OR1K_OPCODE_SFGTU   {2'b11, 4'h9}
//`define OR1K_OPCODE_SFGEU   {2'b11, 4'h9}
//`define OR1K_OPCODE_SFLTU   {2'b11, 4'h9}
//`define OR1K_OPCODE_SFLEU   {2'b11, 4'h9}
//`define OR1K_OPCODE_SFGTS   {2'b11, 4'h9}
//`define OR1K_OPCODE_SFGES   {2'b11, 4'h9}
//`define OR1K_OPCODE_SFLTS   {2'b11, 4'h9}
//`define OR1K_OPCODE_SFLES   {2'b11, 4'h9}

`define OR1K_OPCODE_SF {2'b11, 4'h9}

`define OR1K_OPCODE_CUST5 {2'b11, 4'hC}
`define OR1K_OPCODE_CUST6 {2'b11, 4'hD}
`define OR1K_OPCODE_CUST7 {2'b11, 4'hE}
`define OR1K_OPCODE_CUST8 {2'b11, 4'hF}

// ORFPX32 opcodes
`define OR1K_OPCODE_FPU {2'b11, 4'h2}
// FP OPs
// MSbit indicates FPU operation valid
`define OR1K_FPUOP_WIDTH 8
`define OR1K_FPUOP_SELECT 7:0
// Select bits for Ordered/Unordered comparison
`define OR1K_FPUOP_GENERIC_CMP_WIDTH 3
`define OR1K_FPUOP_GENERIC_CMP_SELECT 2:0
// Unordered comparison bit
`define OR1K_FPUOP_UNORDERED_CMP_BIT 5
// FP instruction is double precision if bit 4 is set. We're a 32-bit 
// implementation thus do not support double precision FP 
`define OR1K_FPUOP_DOUBLE_BIT 4
// FP Arithmetic OPCs
`define OR1K_FPUOP_ADD 8'b0000_0000
`define OR1K_FPUOP_SUB 8'b0000_0001
`define OR1K_FPUOP_MUL 8'b0000_0010
`define OR1K_FPUOP_DIV 8'b0000_0011
`define OR1K_FPUOP_ITOF 8'b0000_0100
`define OR1K_FPUOP_FTOI 8'b0000_0101
`define OR1K_FPUOP_REM 8'b0000_0110
`define OR1K_FPUOP_RESERVED 8'b0000_0111
// FP Ordered Comparison OPCs
`define OR1K_FPCOP_SFEQ 8'b0000_1000
`define OR1K_FPCOP_SFNE 8'b0000_1001
`define OR1K_FPCOP_SFGT 8'b0000_1010
`define OR1K_FPCOP_SFGE 8'b0000_1011
`define OR1K_FPCOP_SFLT 8'b0000_1100
`define OR1K_FPCOP_SFLE 8'b0000_1101
// FP Unordered Comparison OPCs
`define OR1K_FPCOP_SFUEQ 8'b0010_1000
`define OR1K_FPCOP_SFUNE 8'b0010_1001
`define OR1K_FPCOP_SFUGT 8'b0010_1010
`define OR1K_FPCOP_SFUGE 8'b0010_1011
`define OR1K_FPCOP_SFULT 8'b0010_1100
`define OR1K_FPCOP_SFULE 8'b0010_1101
`define OR1K_FPCOP_SFUN 8'b0010_1110

// OR1K SPR defines
`define SPR_BASE(x) (x/(2**11))
`define SPR_OFFSET(x) (x%(2**11))

// Addresses
`define OR1K_SPR_SYS_BASE {4'd0}
`define OR1K_SPR_VR_ADDR {5'd0,11'd0}
`define OR1K_SPR_UPR_ADDR {5'd0,11'd1}
`define OR1K_SPR_CPUCFGR_ADDR {5'd0,11'd2}
`define OR1K_SPR_DMMUCFGR_ADDR {5'd0,11'd3}
`define OR1K_SPR_IMMUCFGR_ADDR {5'd0,11'd4}
`define OR1K_SPR_DCCFGR_ADDR {5'd0,11'd5}
`define OR1K_SPR_ICCFGR_ADDR {5'd0,11'd6}
`define OR1K_SPR_DCFGR_ADDR {5'd0,11'd7}
`define OR1K_SPR_PCCFGR_ADDR {5'd0,11'd8}
`define OR1K_SPR_VR2_ADDR {5'd0,11'd9}
`define OR1K_SPR_AVR_ADDR {5'd0,11'd10}
`define OR1K_SPR_EVBAR_ADDR {5'd0,11'd11}
`define OR1K_SPR_AECR_ADDR {5'd0,11'd12}
`define OR1K_SPR_AESR_ADDR {5'd0,11'd13}
`define OR1K_SPR_NPC_ADDR {5'd0,11'd16}
`define OR1K_SPR_SR_ADDR {5'd0,11'd17}
`define OR1K_SPR_PPC_ADDR {5'd0,11'd18}
`define OR1K_SPR_FPCSR_ADDR {5'd0,11'd20}
`define OR1K_SPR_ISR0_ADDR {5'd0,11'd21}
`define OR1K_SPR_EPCR0_ADDR {5'd0,11'd32}
`define OR1K_SPR_EEAR0_ADDR {5'd0,11'd48}
`define OR1K_SPR_ESR0_ADDR {5'd0,11'd64}
`define OR1K_SPR_COREID_ADDR {5'd0,11'd128}
`define OR1K_SPR_NUMCORES_ADDR {5'd0,11'd129}
`define OR1K_SPR_GPR0_ADDR {5'd0,11'd1024}

`define OR1K_SPR_DMMU_BASE {4'd1}
`define OR1K_SPR_DMMUCR_ADDR {5'd1,11'd0}
`define OR1K_SPR_DMMUPR_ADDR {5'd1,11'd1}
`define OR1K_SPR_DTLBEIR_ADDR {5'd1,11'd2}
`define OR1K_SPR_DATBMR0_ADDR {5'd1,11'd4}
`define OR1K_SPR_DATBTR0_ADDR {5'd1,11'd8}
`define OR1K_SPR_DTLBW0MR0_ADDR {5'd1,11'd512}
`define OR1K_SPR_DTLBW0TR0_ADDR {5'd1,11'd640}
`define OR1K_SPR_DTLBW1MR0_ADDR {5'd1,11'd768}
`define OR1K_SPR_DTLBW1TR0_ADDR {5'd1,11'd896}
`define OR1K_SPR_DTLBW2MR0_ADDR {5'd1,11'd1024}
`define OR1K_SPR_DTLBW2TR0_ADDR {5'd1,11'd1152}
`define OR1K_SPR_DTLBW3MR0_ADDR {5'd1,11'd1280}
`define OR1K_SPR_DTLBW3TR0_ADDR {5'd1,11'd1408}

`define OR1K_SPR_IMMU_BASE {4'd2}
`define OR1K_SPR_IMMUCR_ADDR {5'd2,11'd0}
`define OR1K_SPR_IMMUPR_ADDR {5'd2,11'd1}
`define OR1K_SPR_ITLBEIR_ADDR {5'd2,11'd2}
`define OR1K_SPR_IATBMR0_ADDR {5'd2,11'd4}
`define OR1K_SPR_IATBTR0_ADDR {5'd2,11'd8}
`define OR1K_SPR_ITLBW0MR0_ADDR {5'd2,11'd512}
`define OR1K_SPR_ITLBW0TR0_ADDR {5'd2,11'd640}
`define OR1K_SPR_ITLBW1MR0_ADDR {5'd2,11'd768}
`define OR1K_SPR_ITLBW1TR0_ADDR {5'd2,11'd896}
`define OR1K_SPR_ITLBW2MR0_ADDR {5'd2,11'd1024}
`define OR1K_SPR_ITLBW2TR0_ADDR {5'd2,11'd1152}
`define OR1K_SPR_ITLBW3MR0_ADDR {5'd2,11'd1280}
`define OR1K_SPR_ITLBW3TR0_ADDR {5'd2,11'd1408}

`define OR1K_SPR_DC_BASE {4'd3}
`define OR1K_SPR_DCCR_ADDR {5'd3,11'd0}
`define OR1K_SPR_DCBPR_ADDR {5'd3,11'd1}
`define OR1K_SPR_DCBFR_ADDR {5'd3,11'd2}
`define OR1K_SPR_DCBIR_ADDR {5'd3,11'd3}
`define OR1K_SPR_DCBWR_ADDR {5'd3,11'd4}
`define OR1K_SPR_DCBLR_ADDR {5'd3,11'd5}

`define OR1K_SPR_IC_BASE {4'd4}
`define OR1K_SPR_ICCR_ADDR {5'd4,11'd0}
`define OR1K_SPR_ICBPR_ADDR {5'd4,11'd1}
`define OR1K_SPR_ICBIR_ADDR {5'd4,11'd2}
`define OR1K_SPR_ICBLR_ADDR {5'd4,11'd3}

`define OR1K_SPR_MAC_BASE {4'd5}
`define OR1K_SPR_MACLO_ADDR {5'd5,11'd1}
`define OR1K_SPR_MACHI_ADDR {5'd5,11'd2}

`define OR1K_SPR_DU_BASE {4'd6}
`define OR1K_SPR_DVR0_ADDR {5'd6,11'd0}
`define OR1K_SPR_DCR0_ADDR {5'd6,11'd8}
`define OR1K_SPR_DMR1_ADDR {5'd6,11'd16}
`define OR1K_SPR_DMR2_ADDR {5'd6,11'd17}
`define OR1K_SPR_DCWR0_ADDR {5'd6,11'd18}
`define OR1K_SPR_DSR_ADDR {5'd6,11'd20}
`define OR1K_SPR_DRR_ADDR {5'd6,11'd21}

`define OR1K_SPR_PC_BASE {4'd7}
`define OR1K_SPR_PCCR0_ADDR {5'd7,11'd0}
`define OR1K_SPR_PCCR1_ADDR {5'd7,11'd1}
`define OR1K_SPR_PCCR2_ADDR {5'd7,11'd2}
`define OR1K_SPR_PCCR3_ADDR {5'd7,11'd3}
`define OR1K_SPR_PCCR4_ADDR {5'd7,11'd4}
`define OR1K_SPR_PCCR5_ADDR {5'd7,11'd5}
`define OR1K_SPR_PCCR6_ADDR {5'd7,11'd6}
`define OR1K_SPR_PCCR7_ADDR {5'd7,11'd7}
`define OR1K_SPR_PCMR0_ADDR {5'd7,11'd8}
`define OR1K_SPR_PCMR1_ADDR {5'd7,11'd9}
`define OR1K_SPR_PCMR2_ADDR {5'd7,11'd10}
`define OR1K_SPR_PCMR3_ADDR {5'd7,11'd11}
`define OR1K_SPR_PCMR4_ADDR {5'd7,11'd12}
`define OR1K_SPR_PCMR5_ADDR {5'd7,11'd13}
`define OR1K_SPR_PCMR6_ADDR {5'd7,11'd14}
`define OR1K_SPR_PCMR7_ADDR {5'd7,11'd15}

`define OR1K_SPR_PM_BASE {4'd8}
`define OR1K_SPR_PMR_ADDR {5'd8,11'd0}

`define OR1K_SPR_PIC_BASE {4'd9}
`define OR1K_SPR_PICMR_ADDR {5'd9,11'd0}
`define OR1K_SPR_PICSR_ADDR {5'd9,11'd2}

`define OR1K_SPR_TT_BASE {4'd10}
`define OR1K_SPR_TTMR_ADDR {5'd10,11'd0}
`define OR1K_SPR_TTCR_ADDR {5'd10,11'd1}

`define OR1K_SPR_FPU_BASE {4'd11}

// Register bit defines

// Supervision Register
`define OR1K_SPR_SR_SM 0  // Supervisor mode
`define OR1K_SPR_SR_TEE 1  // Timer exception enable
`define OR1K_SPR_SR_IEE 2  // Interrupt exception enable
`define OR1K_SPR_SR_DCE 3  // Data cache enable
`define OR1K_SPR_SR_ICE 4  // Instruction cache enable
`define OR1K_SPR_SR_DME 5  // Data MMU enable
`define OR1K_SPR_SR_IME 6  // Instruction MMU enable
`define OR1K_SPR_SR_LEE 7  // Little-endian enable
`define OR1K_SPR_SR_CE 8  // CID enable
`define OR1K_SPR_SR_F 9  // Flag
`define OR1K_SPR_SR_CY 10  // Carry flag
`define OR1K_SPR_SR_OV 11  // Overflow flag
`define OR1K_SPR_SR_OVE 12  // Overflow exception enable
`define OR1K_SPR_SR_DSX 13  // Delay slot exception
`define OR1K_SPR_SR_EPH 14  // Exception prefix high
`define OR1K_SPR_SR_FO 15  // Fixed to one
`define OR1K_SPR_SR_SUMRA 16  // SPR user read mode access

`define OR1K_SPR_SR_RESERVED 27:17  // Reserved
`define OR1K_SPR_SR_CID 31:28  // Context ID

// Version register - DEPRECATED
`define OR1K_SPR_VR_REV 5:0  // Revision
`define OR1K_SPR_VR_UVRP 6  // Updated Version Registers Present
`define OR1K_SPR_VR_RESERVED 15:7  // Reserved
`define OR1K_SPR_VR_CFG 23:16  // Configuration Template
`define OR1K_SPR_VR_VER 31:24  // Version

// Unit Present register
`define OR1K_SPR_UPR_UP 0
`define OR1K_SPR_UPR_DCP 1
`define OR1K_SPR_UPR_ICP 2
`define OR1K_SPR_UPR_DMP 3
`define OR1K_SPR_UPR_IMP 4
`define OR1K_SPR_UPR_MP 5
`define OR1K_SPR_UPR_DUP 6
`define OR1K_SPR_UPR_PCUP 7
`define OR1K_SPR_UPR_PICP 8
`define OR1K_SPR_UPR_PMP 9
`define OR1K_SPR_UPR_TTP 10
`define OR1K_SPR_UPR_RESERVED 23:11
`define OR1K_SPR_UPR_CUP 31:24

// CPU Configuration register
`define OR1K_SPR_CPUCFGR_NSGF 3:0 // Number of shadow GPRs
`define OR1K_SPR_CPUCFGR_CFG 4
`define OR1K_SPR_CPUCFGR_OB32S 5
`define OR1K_SPR_CPUCFGR_OB64S 6
`define OR1K_SPR_CPUCFGR_OF32S 7
`define OR1K_SPR_CPUCFGR_OF64S 8
`define OR1K_SPR_CPUCFGR_OV64S 9
`define OR1K_SPR_CPUCFGR_ND 10  // No delay-slot implementation
`define OR1K_SPR_CPUCFGR_AVRP 11  // Arch. version registers
`define OR1K_SPR_CPUCFGR_EVBARP 12  // Exception vector base addr reg
`define OR1K_SPR_CPUCFGR_ISRP 13  // Implementation specific regs
`define OR1K_SPR_CPUCFGR_AECSRP 14  // Arith. exception regs
`define OR1K_SPR_CPUCFGR_RESERVED 31:15

// Version register 2 (new with OR1K 1.0)
`define OR1K_SPR_VR2_VER 23:0
`define OR1K_SPR_VR2_CPUID 31:24

// Architecture Version register
`define OR1K_SPR_AVR_RESERVED 7:0
`define OR1K_SPR_AVR_REV 15:8
`define OR1K_SPR_AVR_MIN 23:16
`define OR1K_SPR_AVR_MAJ 31:24

// Exception Vector Base Address register
`define OR1K_SPR_EVBAR_RESERVED 12:0
`define OR1K_SPR_EVBAR_EVBA 31:13

// Arithmetic Exception Control register
`define OR1K_SPR_AECR_CYADDE 0
`define OR1K_SPR_AECR_OVADDE 1
`define OR1K_SPR_AECR_CYMULE 2
`define OR1K_SPR_AECR_OVMULE 3
`define OR1K_SPR_AECR_DBZE 4
`define OR1K_SPR_AECR_CYMACADDE 5
`define OR1K_SPR_AECR_OVMACADDE 6
`define OR1K_SPR_AECR_RESERVED 31:7

// Arithmetic Exception Status register
`define OR1K_SPR_AESR_CYADDE 0
`define OR1K_SPR_AESR_OVADDE 1
`define OR1K_SPR_AESR_CYMULE 2
`define OR1K_SPR_AESR_OVMULE 3
`define OR1K_SPR_AESR_DBZE 4
`define OR1K_SPR_AESR_CYMACADDE 5
`define OR1K_SPR_AESR_OVMACADDE 6
`define OR1K_SPR_AESR_RESERVED 31:7

// Tick timer registers
`define OR1K_SPR_TTMR_TP 27:0  // Time period
`define OR1K_SPR_TTMR_IP 28    // Interrupt pending
`define OR1K_SPR_TTMR_IE 29    // Interrupt enable
`define OR1K_SPR_TTMR_M 31:30 // Mode
// Tick timer mode values
`define OR1K_SPR_TTMR_M_DIS 2'b00  // Disabled
`define OR1K_SPR_TTMR_M_RST 2'b01  // Restart-on-match mode
`define OR1K_SPR_TTMR_M_STP 2'b10  // Stop-on-match mode
`define OR1K_SPR_TTMR_M_CNT 2'b11  // Continue counting mode

// Data Cache Configuration register
`define OR1K_SPR_DCCFGR_NCW 2:0 // Number of Cache Ways
`define OR1K_SPR_DCCFGR_NCS 6:3 // Number of Cache Sets
`define OR1K_SPR_DCCFGR_CBS 7   // Cache Block Size
`define OR1K_SPR_DCCFGR_CWS 8   // Cache Write Strategy
`define OR1K_SPR_DCCFGR_CCRI 9   // Cache Control Register Implemented
`define OR1K_SPR_DCCFGR_CBIRI 10  // Cache Block Invalidate Register Implemented
`define OR1K_SPR_DCCFGR_CBPRI 11  // Cache Block Prefetch Register Implemented
`define OR1K_SPR_DCCFGR_CBLRI 12  // Cache Block Lock Register Implemented
`define OR1K_SPR_DCCFGR_CBFRI 13  // Cache Block Flush Register Implemented
`define OR1K_SPR_DCCFGR_CBWBRI 14 // Cache Block Write-Back Register Implemented

// Instruction Cache Configuration register
`define OR1K_SPR_ICCFGR_NCW 2:0 // Number of Cache Ways
`define OR1K_SPR_ICCFGR_NCS 6:3 // Number of Cache Sets
`define OR1K_SPR_ICCFGR_CBS 7   // Cache Block Size
`define OR1K_SPR_ICCFGR_CCRI 9   // Cache Control Register Implemented
`define OR1K_SPR_ICCFGR_CBIRI 10  // Cache Block Invalidate Register Implemented
`define OR1K_SPR_ICCFGR_CBPRI 11  // Cache Block Prefetch Register Implemented
`define OR1K_SPR_ICCFGR_CBLRI 12  // Cache Block Lock Register Implemented

// Data MMU Configuration register
`define OR1K_SPR_DMMUFGR_NTW 1:0 // Number of TLB ways
`define OR1K_SPR_DMMUFGR_NTS 4:2 // Number of TLB sets
`define OR1K_SPR_DMMUFGR_NAE 7:5 // Number of ATB entries
`define OR1K_SPR_DMMUFGR_CRI 8   // Control Register Implemented
`define OR1K_SPR_DMMUFGR_PRI 9   // Protection Register Implemented
`define OR1K_SPR_DMMUFGR_TEIRI 10  // TLB Entry Invalidate Register Implemented
`define OR1K_SPR_DMMUFGR_HTR 11  // Hardware TLB Reload

// Instruction MMU Configuration register
`define OR1K_SPR_IMMUFGR_NTW 1:0 // Number of TLB ways
`define OR1K_SPR_IMMUFGR_NTS 4:2 // Number of TLB sets
`define OR1K_SPR_IMMUFGR_NAE 7:5 // Number of ATB entries
`define OR1K_SPR_IMMUFGR_CRI 8   // Control Register Implemented
`define OR1K_SPR_IMMUFGR_PRI 9   // Protection Register Implemented
`define OR1K_SPR_IMMUFGR_TEIRI 10  // TLB Entry Invalidate Register Implemented
`define OR1K_SPR_IMMUFGR_HTR 11  // Hardware TLB Reload

// Debug Mode Register 1
`define OR1K_SPR_DMR1_ST 22
`define OR1K_SPR_DMR1_BT 23

// Debug Stop Register
`define OR1K_SPR_DSR_RSTE 0
`define OR1K_SPR_DSR_BUSEE 1
`define OR1K_SPR_DSR_DPFE 2
`define OR1K_SPR_DSR_IPFE 3
`define OR1K_SPR_DSR_TTE 4
`define OR1K_SPR_DSR_AE 5
`define OR1K_SPR_DSR_IIE 6
`define OR1K_SPR_DSR_INTE 7
`define OR1K_SPR_DSR_DME 8
`define OR1K_SPR_DSR_IME 9
`define OR1K_SPR_DSR_RE 10
`define OR1K_SPR_DSR_SCE 11
`define OR1K_SPR_DSR_FPE 12
`define OR1K_SPR_DSR_TE 13

`define OR1K_SPR_DRR_RSTE 0
`define OR1K_SPR_DRR_BUSEE 1
`define OR1K_SPR_DRR_DPFE 2
`define OR1K_SPR_DRR_IPFE 3
`define OR1K_SPR_DRR_TTE 4
`define OR1K_SPR_DRR_AE 5
`define OR1K_SPR_DRR_IIE 6
`define OR1K_SPR_DRR_IE 7
`define OR1K_SPR_DRR_DME 8
`define OR1K_SPR_DRR_IME 9
`define OR1K_SPR_DRR_RE 10
`define OR1K_SPR_DRR_SCE 11
`define OR1K_SPR_DRR_FPE 12
`define OR1K_SPR_DRR_TE 13

// FPCSR bits
`define OR1K_FPCSR_FPEE 0
`define OR1K_FPCSR_RM 2:1
`define OR1K_FPCSR_OVF 3
`define OR1K_FPCSR_UNF 4
`define OR1K_FPCSR_SNF 5
`define OR1K_FPCSR_QNF 6
`define OR1K_FPCSR_ZF 7
`define OR1K_FPCSR_IXF 8
`define OR1K_FPCSR_IVF 9
`define OR1K_FPCSR_INF 10
`define OR1K_FPCSR_DZF 11
// FPCSR sizes of fields
`define OR1K_FPCSR_WIDTH 12 // [11:0]
`define OR1K_FPCSR_RM_SIZE 2
`define OR1K_FPCSR_ALLF_SIZE 9 // [11:3]
// FPCSR flags
`define OR1K_FPCSR_ALLF `OR1K_FPCSR_DZF:`OR1K_FPCSR_OVF
// FPCSR reset value
`define OR1K_FPCSR_RESET_VALUE `OR1K_FPCSR_WIDTH'd0
// FPCSR extention: maskable FPU flags.
// -vvvv- uncomment the next line to switch the extention on -vvvv-
//`define OR1K_FPCSR_MASK_FLAGS
// bits
`define OR1K_FPCSR_MASK_OVF 12
`define OR1K_FPCSR_MASK_UNF 13
`define OR1K_FPCSR_MASK_SNF 14
`define OR1K_FPCSR_MASK_QNF 15
`define OR1K_FPCSR_MASK_ZF 16
`define OR1K_FPCSR_MASK_IXF 17
`define OR1K_FPCSR_MASK_IVF 18
`define OR1K_FPCSR_MASK_INF 19
`define OR1K_FPCSR_MASK_DZF 20
// bus select
`define OR1K_FPCSR_MASK_ALL `OR1K_FPCSR_MASK_DZF:`OR1K_FPCSR_MASK_OVF
// reset value.
`define OR1K_FPCSR_MASK_RESET_VALUE `OR1K_FPCSR_ALLF_SIZE'd0

// PCU PCMR bits
`define OR1K_PCMR_CP 0
`define OR1K_PCMR_RSVD_1 1
`define OR1K_PCMR_CISM 2
`define OR1K_PCMR_CIUM 3
`define OR1K_PCMR_LA 4
`define OR1K_PCMR_SA 5
`define OR1K_PCMR_IF 6
`define OR1K_PCMR_DCM 7
`define OR1K_PCMR_ICM 8
`define OR1K_PCMR_IFS 9
`define OR1K_PCMR_LSUS 10
`define OR1K_PCMR_BS 11
`define OR1K_PCMR_DTLBM 12
`define OR1K_PCMR_ITLBM 13
`define OR1K_PCMR_DDS 14
`define OR1K_PCMR_WPE 25:15
`define OR1K_PCMR_RSVD_2 31:26

// Implementation-specific SPR defines
`define MOR1KX_SPR_SR_WIDTH 16
`define MOR1KX_SPR_SR_RESET_VALUE `MOR1KX_SPR_SR_WIDTH'h8001

// Exception addresses
`define OR1K_RESET_VECTOR 5'h01
`define OR1K_BERR_VECTOR 5'h02
`define OR1K_DPF_VECTOR 5'h03
`define OR1K_IPF_VECTOR 5'h04
`define OR1K_TT_VECTOR 5'h05
`define OR1K_ALIGN_VECTOR 5'h06
`define OR1K_ILLEGAL_VECTOR 5'h07
`define OR1K_INT_VECTOR 5'h08
`define OR1K_DTLB_VECTOR 5'h09
`define OR1K_ITLB_VECTOR 5'h0a
`define OR1K_RANGE_VECTOR 5'h0b
`define OR1K_SYSCALL_VECTOR 5'h0c
`define OR1K_FP_VECTOR 5'h0d
`define OR1K_TRAP_VECTOR 5'h0e

// Whether we'll allow things using AYNC reset to have it:
//`define OR_ASYNC_RST or posedge rst
`define OR_ASYNC_RST

// Implementation version defines
`define MOR1KX_CPUID 8'h01
// or1k breaks up the VR2 version register to be 3 8-bit fields
// MSB is major version, middle byte is minor version number
// and final byte is the pipeline identifier.
`define MOR1KX_VERSION_MAJOR 8'd5
`define MOR1KX_VERSION_MINOR 8'd0

// or1k implementation-specific register definitions
`define MOR1KX_PIPEID_CAPPUCCINO 8'd1
`define MOR1KX_PIPEID_ESPRESSO 8'd2
`define MOR1KX_PIPEID_PRONTOESPRESSO 8'd3
