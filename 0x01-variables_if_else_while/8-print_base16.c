#include <stdio.h>
/**
 * main - Prints  all the numbers of base
 * 16 in lowercase, followed by a new line.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char nl;

	for (nl = 48; nl < 58; nl++)
	{
		putchar(nl);
	}
	for (nl = 97; nl < 103; nl++)
	{
		putchar(nl);
	}
	putchar('\n');
	return (0);
}
