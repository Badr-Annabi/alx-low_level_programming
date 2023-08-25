#include "main.h"

/**
* print_number - prints an integer.
* @n: our input
*/

void print_number(int n)
{
	unsigned int p;

	p = n;
	if (p < 0)
	{
		_putchar('-');
		p = -n;
	}
	if (n / 10 != 0)
	{
		_putchar(n / 10);
	}
	_putchar((p % 10) + '0')
}
