#ifndef SYNTAX_H
#define SYNTAX_H

char *str[][2] = {{"MD", "0x00"},
                  {"CMP", "0x01"},
                  {"JNZ", "0x02"},
                  {"JMT", "0x03"},
                  {"JZ", "0x04"},
                  {"JEQ", "0x05"},
                  {"JLT", "0x06"},
                  {"ADD", "0x07"},
                  {"ADC", "0x08"},
                  {"SBB", "0x09"},
                  {"OR", "0x0a"},
                  {"NOR", "0x0b"},
                  {"SUB", "0x0c"},
                  {"MVA", "0x0d"},
                  {"MVB", "0x0e"},
                  {"MVC", "0x0f"},
                  {"MVD", "0x10"},
                  {"PUSH", "0x12"},
                  {"POP", "0x13"},
                  {"INB", "0x17"},
                  {"OUTB", "0x18"},
                  {"LGI", "0x1a"},
                  {"LGD", "0x1b"},
                  {"HLT", "0x1e"},
                  {"RST", "0x1f"}};
#endif