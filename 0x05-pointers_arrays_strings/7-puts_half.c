#include "main.h"
/**
* puts_half - prints half of a string, followed by a new line.
* @str: input
*/
void puts_half(char *str)
{
	int l = 0;
	int h;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	h = l / 2;
	if (l % 2 == 1)
	{
		h = (l + 1) / 2;
	}
	for (i = h; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
