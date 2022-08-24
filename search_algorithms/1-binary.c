#include "search_algos.h"

/**
 * binary_search - searches an int value in a sorted array using binary search
 * @array: pointer to a ascending order sorted array
 * @size: array's size
 * @value: value to search for
 * Return: index where value is, otherwise -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0, min = 0, max = size - 1, med = 0;

	if (!array)
		return (-1);
	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			if (i < (max))
				printf("%d, ", array[i]);
			if (i == (max))
				printf("%d\n", array[i]);
		}
		med = (max + min) / 2;
		if (array[med] > value)
		{
			max = med - 1;
		}
		else if (array[med] < value)
		{
			min = med + 1;
		}
		else if (array[med] == value)
			return (med);
	}
	return (-1);
}
