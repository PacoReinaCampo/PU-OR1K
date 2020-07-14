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
 *   Paco Reina Campo <pacoreinacampo@queenfield.tech>
 */

#ifndef __VERILATOR_TB_UTILS_H__
#define __VERILATOR_TB_UTILS_H__

#include <stdint.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "jtagServer.h"

extern struct argp verilator_tb_utils_argp;

class VerilatorTbUtils {
public:
  VerilatorTbUtils(uint32_t *mem);
  ~VerilatorTbUtils();

  VerilatedVcdC* tfp;

  VerilatorJtagServer* jtag;

  bool doCycle();

  bool doJTAG(uint8_t *tms, uint8_t *tdi, uint8_t *tck, uint8_t tdo);

  uint64_t getTime() { return t; }

  uint64_t getTimeout() { return timeout; }
  bool getVcdDump() { return vcdDump; }
  uint64_t getVcdDumpStart() { return vcdDumpStart; }
  uint64_t getVcdDumpStop() { return vcdDumpStop; }
  char *getVcdFileName() { return vcdFileName; }

  bool getJtagEnable() { return jtagEnable; }
  int getJtagPort() { return jtagPort; }

  static int parseOpts(int key, char *arg, struct argp_state *state);

private:
  uint64_t t;

  uint64_t timeout;

  bool vcdDump;
  uint64_t vcdDumpStart;
  uint64_t vcdDumpStop;
  char *vcdFileName;
  bool vcdDumping;

  bool jtagEnable;
  int jtagPort;

  uint32_t *mem;

  bool loadElf(char *fileName);
  bool loadBin(char *fileName);
};

#endif
