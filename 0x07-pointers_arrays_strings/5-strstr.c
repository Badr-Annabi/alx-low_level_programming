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
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *t = needle;

		while (*p == *t && *t != '\0')
		{
			p++;
			t++;
		}
		if (*t == '\0')
			return (haystack);
	}
	return (NULL);
}
