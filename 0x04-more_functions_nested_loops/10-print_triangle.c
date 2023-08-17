#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line.
* @size: the size of triangle
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (j = 1 ; j <= size ; j++)
	{
		for (i = j ; i < size ; i++)
		{
			_putchar(' ');
		}
		for (i = 1 ; i <= j ; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
