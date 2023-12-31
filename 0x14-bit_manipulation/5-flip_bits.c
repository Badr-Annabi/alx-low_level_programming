#include "main.h"

/**
 * flip_bits - returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: bits needed to equal m for n.
 * @m: the other number to set other equal.
 * Return: the number of fliped bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
