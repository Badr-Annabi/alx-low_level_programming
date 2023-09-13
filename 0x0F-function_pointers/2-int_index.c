#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for integer.
 * @array: the array that we ll search on it.
 * @size: the size of the array.
 * @cmp: our PF that we ll use to compare the value with array[i].
 * Return: i if the value of our input matches an element of the array,
 * -1 if not and if size is <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);

}
