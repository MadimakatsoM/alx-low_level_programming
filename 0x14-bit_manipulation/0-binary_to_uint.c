

#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @binary: string containing binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *binary)
{
    unsigned int decimal_val = 0;

    /* Check if binary is NULL */
    if (!binary) {
        return (0);
    }

    /* Traverse the binary string */
    while (*binary) {
        /* Check if the current character is not a 0 or a 1 */
        if (*binary != '0' && *binary != '1') {
            return (0);
        }

        /* Convert the binary number to a decimal number */
        decimal_val = (decimal_val << 1) | (*binary - '0');
        binary++;
    }

    /* Return the converted decimal number */
    return (decimal_val);
}

