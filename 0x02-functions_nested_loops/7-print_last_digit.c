#include "main.h"
/**
* print_last_digit - prints the last digit of a number.
* @i: the input which we want to see the last digit
* Return: The last digit
*/
int print_last_digit(int i)
{
	int l = i % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
