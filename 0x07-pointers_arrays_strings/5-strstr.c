#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 * @haystack: our input.
 * @needle: the sentence or word that we want to check.
 * Return: needle or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				needle++;
				haystack++;
			}
		}
		if (needle[j] == '\0')
			return (needle);
	}
	return (NULL);
}
