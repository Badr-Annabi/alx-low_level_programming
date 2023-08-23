#include "main.h"
/**
* _strncat - concatenates two strings.
* @dest: the destination
* @src: the source
* @n: int that we ll add to dest
* Return: character
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
