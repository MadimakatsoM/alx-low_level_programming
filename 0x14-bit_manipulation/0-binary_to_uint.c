// #include "main.h"

// /**
//  * binary_to_uint - converts binary number to unsigned int
//  * @b: string containing binary number
//  * Return: converted number
//  */

// unsigned int binary_to_uint(const char *b)
// {
// 	int i;
// 	unsigned int dec_val = 0;

// 	if (!b)
// 		return (0);

// 	for (i = 0; b[i]; i++)
// 	{
// 		if (b[i] < '0' || b[i] > '1')
// 			return (0);
// 		dec_val = 2 * dec_val + (b[i] - '0');
// 	}
// 	return (dec_val);
// }

// The above code is the original code I did.
// Follow these steps to change the other code to the one simmilar below
// Use ChatGPT and ask these questions:
// Rewrite the following code without changing its functionality.
// Rename all variables(just make sure they correspond)
// Add inline comments
// Check if code adheres to Betty Style guidlines
// Then copy  and paste the code you want to be changed

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

