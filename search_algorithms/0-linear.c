#include "search_algos.h"

/**
 * linear_search - search an int value in a array using linear seach algorithms
 * @array: pointer to first element of the array
 * @size: array's size
 * @value: value to search for
 * Return: index where value is, otherwise NULL
 */

int linear_search(int *array, size_t size, int value)
{
	int index = -1;
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%ld] = %d\[n]", i, array[i]);
		if (array[i] == value)
		{
		/*	printf("Found %d at index: %ld\n", value, i);*/
			index = i;
			break;
		}
		i++;
	}
	return (index);
}
