#include "main.h"
/**
* *_strcpy - copies the string pointed to by src,
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int l = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}