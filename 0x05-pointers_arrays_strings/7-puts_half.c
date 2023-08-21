#include "main.h"
/**
* puts_half - prints half of a string, followed by a new line.
* @str: input
*/
void puts_half(char *str)
{
	int l = 0;
	int h = 0;
	int i;

	while (*str != '\0')
	{
		l++;
		str++;
	}
	h = (l - 1) / 2;
	for (i = 0; i >= h; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
