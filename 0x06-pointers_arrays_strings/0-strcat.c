#include "main.h"
/**
* _strcat - concatenates two strings.
* @dest: the destination.
* @src: the source.
* Return: char
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*dest != '\0')
	{
		i++;
		dest++;
	}
	while (*src != '\0')
	{
		dest[i] = src[j];
		j++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
