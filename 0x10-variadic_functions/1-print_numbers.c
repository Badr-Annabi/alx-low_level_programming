#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the seperator that we ll use
 * @n: numbers that we re gonna print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		va_end(args);
		printf("\n");
}
