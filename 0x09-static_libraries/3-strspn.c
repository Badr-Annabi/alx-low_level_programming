#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: character that we ll check
 * @accept: value in our input
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, val;

	i = 0;
	val = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				val++;
			}
		}
		i++;
		j = 0;
	}
	return (val);
}
