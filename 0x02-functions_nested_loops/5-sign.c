#include "main.h"
/**
* print_sign - prints the sign of a number.
* @n: the number that we want to check
* Return: 1 if the number is positive, 0 if it's 0, -1 if it's negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}