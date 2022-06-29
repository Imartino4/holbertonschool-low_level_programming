#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - execute a function given as a parameter
 * @size: size of array
 * @array: pointer to array
 * @action: pointer to function
 *
 * Description -
 * Return: void
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}
