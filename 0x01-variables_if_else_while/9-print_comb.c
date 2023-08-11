#include <stdio.h>
/**
 * main -  Prints all possible combinations of single-digit numbers.
 *
 */
int main(void)
{
	char n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
