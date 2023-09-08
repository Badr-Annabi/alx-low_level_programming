#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the integer thta we ll start from.
 * @max: the last integer.
 * Return: ptr (which is int).
 */
int *array_range(int min, int max)
{
	int *ptr, i, diff = 0;

	if (min > max)
		return (NULL);
	diff = max - min + 1;

	ptr = malloc(sizeof(int) * diff);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min + i;
	return (ptr);


}
