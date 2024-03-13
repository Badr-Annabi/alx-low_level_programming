#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a
 * sorted array of integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in the array.
 * @value: the value to search for
 * Return: the first indexwhere value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int prob = 0, low = 0, high = (int)size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		prob = low + (high - low) * (value - array[low]) / (
				array[high] - array[low]);
		printf("Value checked array[%d] = [%d]\n",
				prob, array[prob]);
		if (prob >= (int)size || prob < 0)
		{
			printf(" is out of range\n");
			break;
		}
		if (array[prob] == value)
			return (prob);
		if (array[prob] < value)
			low = prob + 1;
		else
			high = prob - 1;
	}
	return (-1);
}
