#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free 2 dimensional grid
 * @grid: pointer to pinter int
 * @height: int
 *
 * Description -
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i <= height; i++)
			free(grid[i]);
		free(grid);
	}
}
