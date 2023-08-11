#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int i;
	int d;

	for (i = 48; i < 56; i++)
	{
		for (d = 49; d < 57; d++)
		{
			if (d > i)
			{
				putchar(i);
				putchar(d);

				if (i != 56 || d != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
