#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: input string.
 */
void _print_rev_recursion(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	len--;
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}

}
