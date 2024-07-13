#ifndef HEX_TO_DEC_H
#define HEX_TO_DEC_H
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "hex.h"
#include <stdio.h>

char *hex_to_bin(char *hex_str)
{
    int len = strlen(hex_str);
    char *bin_str = (char *)calloc(len * 4 + 1, sizeof(char));
    int bin_idx = 0;

    // Skip "0x" prefix if present
    if (len > 2 && hex_str[0] == '0' && (hex_str[1] == 'x' || hex_str[1] == 'X'))
    {
        hex_str += 2;
        len -= 2;
    }

    for (int i = 0; i < len; i++)
    {
        char c = hex_str[i];
        switch (c)
        {
        case '0':
            strcat(bin_str, "0000");
            break;
        case '1':
            strcat(bin_str, "0001");
            break;
        case '2':
            strcat(bin_str, "0010");
            break;
        case '3':
            strcat(bin_str, "0011");
            break;
        case '4':
            strcat(bin_str, "0100");
            break;
        case '5':
            strcat(bin_str, "0101");
            break;
        case '6':
            strcat(bin_str, "0110");
            break;
        case '7':
            strcat(bin_str, "0111");
            break;
        case '8':
            strcat(bin_str, "1000");
            break;
        case '9':
            strcat(bin_str, "1001");
            break;
        case 'A':
        case 'a':
            strcat(bin_str, "1010");
            break;
        case 'B':
        case 'b':
            strcat(bin_str, "1011");
            break;
        case 'C':
        case 'c':
            strcat(bin_str, "1100");
            break;
        case 'D':
        case 'd':
            strcat(bin_str, "1101");
            break;
        case 'E':
        case 'e':
            strcat(bin_str, "1110");
            break;
        case 'F':
        case 'f':
            strcat(bin_str, "1111");
            break;
        default:
            fprintf(stderr, "Invalid hexadecimal character: %c\n", c);
            free(bin_str);
            return NULL;
        }
        bin_idx += 4;
    }

    return bin_str;
}

#endif