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

	val = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				val++;
			}
		}
	}
	return (val);
}
