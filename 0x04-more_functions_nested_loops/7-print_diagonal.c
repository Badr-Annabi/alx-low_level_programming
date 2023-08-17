#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: the number of time we ll draw the diagonal
*/

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			int j = 0;

			while (j != i)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
