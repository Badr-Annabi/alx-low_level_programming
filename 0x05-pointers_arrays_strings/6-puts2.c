#include "main.h"
/**
* puts2 - prints every other character of a string
* @str: input
*/
void puts2(char *str)
{
	int i;
	int l = 0;
	char *s = str;

	while (*s != '\0')
	{
		l++;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
