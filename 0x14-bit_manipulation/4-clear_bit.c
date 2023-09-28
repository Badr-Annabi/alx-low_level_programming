#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the input.
 * @index:  the index, starting from 0 of the bit.
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 63)
		return (-1);

	bit = 0x01;
	bit = ~(bit << index);
	if (bit == 0x00)
		return (-1);
	*n &= bit;
	return (1);
}
