#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: first argument.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int result = 0;
	int value;

	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		result += value;
	}
	va_end(args);
	return (result);
}
