#include "search_algos.h"
/**
 * linear_search - searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 * 
 * Return: return the first index where value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
