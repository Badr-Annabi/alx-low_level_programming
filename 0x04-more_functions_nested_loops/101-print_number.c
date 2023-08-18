#include "main.h"

/**
* print_number - prints an integer.
* @n: the number
*/

void print_number(int n)
{
	int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
