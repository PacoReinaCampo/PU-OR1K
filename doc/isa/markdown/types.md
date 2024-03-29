## Instruction Types

Format of a line in the table:

`<type> <type name> <bit encoding>[=<name>] ...`

| type   | type name              | bit encoding                                                                              |
|--------|:-----------------------|:------------------------------------------------------------------------------------------|
| `32`   | `Base`                 | `31:25                     24:20     19:15     14:12        11:7              6:0`        |
| `r`    | `Register`             | `31:27=funct5 26:25=funct2 24:20=rs2 19:15=rs1 14:12=funct3 11:7=rd           6:0=opcode` |
| `r4`   | `Register`             | `31:27=rs3    26:25=funct2 24:20=rs2 19:15=rs1 14:12=funct3 11:7=rd           6:0=opcode` |
| `i`    | `Immediate`            | `31:20[11:0]=imm                     19:15=rs1 14:12=funct3 11:7=rd           6:0=opcode` |
| `s`    | `Store`                | `31:25[11:5]=imm           24:20=rs2 19:15=rs1 14:12=funct3 11:7[4:0]=imm     6:0=opcode` |
| `sb`   | `Branch`               | `31:25[12|10:5]=imm        24:20=rs2 19:15=rs1 14:12=funct3 11:7[4:1|11]=imm  6:0=opcode` |
| `u`    | `Upper`                | `31:12[31:12]=imm                                           11:7=rd           6:0=opcode` |
| `uj`   | `Jump`                 | `31:12[20|10:1|11|19:12]=imm                                11:7=rd           6:0=opcode` |
: Base Instruction Type

| type   | type name              | bit encoding                                                                              |
|--------|:-----------------------|:------------------------------------------------------------------------------------------|
| `16`   | `Compressed`           | `15:13        12:10             9:7        6:5     4:2      1:0`                          |
| `cr`   | `Register`             | `15:12=funct4           11:7=rd/rs1        6:2=rs2          1:0=op`                       |
| `ci`   | `Immediate`            | `15:13=funct3 12=imm    11:7=rd/rs1        6:2=imm          1:0=op`                       |
| `css`  | `Stack-relative Store` | `15:13=funct3 12:7=imm                     6:2=rs2          1:0=op`                       |
| `ciw`  | `Wide Immediate`       | `15:13=funct3 12:5=imm                             4:2=rd'  1:0=op`                       |
| `cl`   | `Load`                 | `15:13=funct3 12:10=imm         9:7=rs1'   6:5=imm 4:2=rd'  1:0=op`                       |
| `cs`   | `Store`                | `15:13=funct3 12:10=imm         9:7=rs1'   6:5=imm 4:2=rs2' 1:0=op`                       |
| `cb`   | `Branch`               | `15:13=funct3 12:10=imm         9:7=rs1'   6:2=imm          1:0=op`                       |
| `cj`   | `Jump`                 | `15:13=funct3 12:2=imm                                      1:0=op`                       |
: Compressed Instruction Type
