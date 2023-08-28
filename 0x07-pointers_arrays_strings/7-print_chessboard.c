#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: Array that we have.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	j = 0;

	for (i = 0; i < 8; i++)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		j = 0;
		_putchar('\n');
	}
}
