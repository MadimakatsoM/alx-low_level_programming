#include "main.h"

/**
 * get_bit - value of a bit at specified index
 * @n: decimal parameter
 * @index: index
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);

	if (index > 32)
	return (-1);
	return (bit & 1);
}
