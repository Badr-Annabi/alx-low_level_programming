#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int i, d, h;

	for (i = 48; i < 58; i++)
	{
		for (d = 49; d < 58; d++)
		{
			for (h = 50; h < 58; h++)
			{
				if (h > d || d > i)
				{
					putchar(i);
					putchar(d);
					putchar(h);
					if (i != 55 || d != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
