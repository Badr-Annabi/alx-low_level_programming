#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: input
*/
void print_rev(char *s)
{
	int i;
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	for (i = l; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
