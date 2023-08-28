#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: pointer
 * @c: the char that we want to locate.
 * Return: character p
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
		i++;
	}
	return (NULL);
}
