#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2dim array of int
 * @width: int
 * @height: int
 *
 * Description -
 * Return: 2dim array
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **t;

	if (width == 0 || height == 0)
		return (NULL);
	t = (int **)malloc(height * sizeof(int *));
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		t[i] = (int *)malloc(width * sizeof(int));
		if (t[i] == NULL)
		{
			for (k = i; k >= 0; k--)
				free(t[k]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	for (i = 0; i < height; i++)
		free(t[i]);
	free(t);
	return (t);
}
