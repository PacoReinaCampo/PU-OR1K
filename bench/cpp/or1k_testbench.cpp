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

/* Copyright (c) 2015-2016 by the author(s)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * =============================================================================
 * Author(s):
 *   Francisco Javier Reina Campo <frareicam@gmail.com>
 */

#include <stdint.h>
#include <signal.h>
#include <argp.h>
#include <verilator_tb_utils.h>

#include "Vor1k_pu__Syms.h"

static bool done;

#define NOP_NOP         0x0000      /* Normal nop instruction */
#define NOP_EXIT        0x0001      /* End of simulation */
#define NOP_REPORT      0x0002      /* Simple report */
#define NOP_PUTC        0x0004      /* Simputc instruction */
#define NOP_CNT_RESET   0x0005      /* Reset statistics counters */
#define NOP_GET_TICKS   0x0006      /* Get # ticks running */
#define NOP_GET_PS      0x0007      /* Get picosecs/cycle */
#define NOP_TRACE_ON    0x0008      /* Turn on tracing */
#define NOP_TRACE_OFF   0x0009      /* Turn off tracing */
#define NOP_RANDOM      0x000a      /* Return 4 random bytes */
#define NOP_OR1KSIM     0x000b      /* Return non-zero if this is Or1ksim */
#define NOP_EXIT_SILENT 0x000c      /* End of simulation, quiet version */

#define RESET_TIME 2

vluint64_t main_time = 0;  // Current simulation time
// This is a 64-bit integer to reduce wrap over issues and
// allow modulus.  You can also use a double, if you wish.

double sc_time_stamp () {  // Called by $time in Verilog
  return main_time;  // converts to double, to match
  // what SystemC does
}

void INThandler(int signal) {
  printf("\nCaught ctrl-c\n");
  done = true;
}

static int parse_opt(int key, char *arg, struct argp_state *state) {
  switch (key) {
  case ARGP_KEY_INIT:
    state->child_inputs[0] = state->input;
    break;
  // Add parsing of custom options here
  }

  return 0;
}

static int parse_args(int argc, char **argv, VerilatorTbUtils* tbUtils) {
  struct argp_option options[] = {
    // Add custom options here
    { 0 }
  };
  struct argp_child child_parsers[] = {
    { &verilator_tb_utils_argp, 0, "", 0 },
    { 0 }
  };
  struct argp argp = { options, parse_opt, 0, 0, child_parsers };

  return argp_parse(&argp, argc, argv, 0, 0, tbUtils);
}

int main(int argc, char **argv, char **env) {
  uint32_t insn = 0;
  uint32_t ex_pc = 0;

  Verilated::commandArgs(argc, argv);

  Vor1k_pu* top = new Vor1k_pu;
  VerilatorTbUtils* tbUtils =
    new VerilatorTbUtils(top->or1k_pu->wb_bfm_memory0->ram0->mem);

  parse_args(argc, argv, tbUtils);

  signal(SIGINT, INThandler);

  top->wb_clk_i = 0;
  top->wb_rst_i = 1;

  top->trace(tbUtils->tfp, 99);

  while (tbUtils->doCycle() && !done) {
    if (tbUtils->getTime() > RESET_TIME)
      top->wb_rst_i = 0;

    top->eval();

    top->wb_clk_i = !top->wb_clk_i;

    tbUtils->doJTAG(&top->tms_pad_i, &top->tdi_pad_i, &top->tck_pad_i, top->tdo_pad_o);

    insn = top->or1k_pu->core->or1k_cpu->monitor_execute_insn;
    ex_pc = top->or1k_pu->core->or1k_cpu->monitor_execute_pc;

    if (insn == (0x15000000 | NOP_EXIT) || insn == (0x15000000 | NOP_EXIT_SILENT)) {
      printf("Success! Got NOP_EXIT. Exiting (%lu)\n",
             tbUtils->getTime());
      done = true;
    }
  }

  printf("Simulation ended at PC = %08x (%lu)\n",
         ex_pc, tbUtils->getTime());

  delete tbUtils;
  exit(0);
}
