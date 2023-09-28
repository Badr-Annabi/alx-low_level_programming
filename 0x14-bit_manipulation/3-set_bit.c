#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the input.
 * @index:  the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 0x01;

	if (index > 63)
		return (-1);
	bit <<= index;

	if (bit == 0)
		return (-1);
	*n |= bit;
	return (1);
}
