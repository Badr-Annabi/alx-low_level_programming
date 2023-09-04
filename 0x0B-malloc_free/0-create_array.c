#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array that we want to allocate.
 * @c: the character that we want to  initialize the array with.
 * Return: the character or Null if the size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);


	for (i = 0; i < size; i++)

		ptr[i] = c;


	return (ptr);
}
