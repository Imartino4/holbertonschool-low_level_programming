#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: pointer to array of int
 * @size: number of element of the array
 * @cmp: pointer to a function
 *
 * Description -
 * Return: the index of the first element which cmp doesnt return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = size - 1; i >= 0; i--)
		{
			if (cmp(array[i]) != 0)
				r = i;

		}
	}
	if (r != 0)
		return (r);
	else
		return (-1);
}
