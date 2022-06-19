#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of thw 2 diagonals
 * @a: int
 * @size: int
 *
 * Description -
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size * size; i = i + size + 1)
		sum1 = sum1 + a[i];
	for (j = size - 1; j < (size * size) - 1; j = j + size - 1)
	{
		sum2 = sum2 + a[j];
	/*	printf("%d-", a[j]);*/
	}
	printf("%d, %d\n", sum1, sum2);
}
