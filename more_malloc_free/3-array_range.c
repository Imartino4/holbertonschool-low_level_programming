#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create an array of integer
 * @min: min value included in array
 * @max: max value included in array
 *
 * Description -
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *t;
	int i;

	if (min > max)
		return (NULL);
	t = malloc((max - min + 1) * sizeof(int));
	if (t == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		t[i] = min + i;
	return (t);
}
