#include "main.h"
/**
* _strncpy - copies a string.
* @dest: destination
* @src: source
* @n: number of digit that we want to copy.
* Return: character.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
