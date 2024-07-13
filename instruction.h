#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "keyword.h"
struct instruction
{
    char *value;
    struct keyword *keywords;
};
#endif