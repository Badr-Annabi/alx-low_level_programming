#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: the string that we want to put in the allocated
 * array.
 * Return: the string that we want.
 */
char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
