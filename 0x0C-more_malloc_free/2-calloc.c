#include "main.h"
#include <stdlib.h>

char *set_ptr(char *str, int a, unsigned int n);

/**
 * set_ptr - seting elements of ptr to 0
 * @str: ptr that we want.
 * @a: number that we want to set with.
 * @n: size of the array or ptr.
 * Return: returns pte or str for the moment.
 */

char *set_ptr(char *str, int a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		str[i] = a;
	return (str);
}



/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of members .
 * @size: size bytes.
 * Return: void ( ptr ).
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	set_ptr(ptr, 0, nmemb * size);

	return (ptr);
}
