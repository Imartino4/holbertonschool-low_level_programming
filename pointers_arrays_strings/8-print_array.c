#include "main.h"
#include <stdio.h>
/**
 * print_array - print the elements of an array
 * @a: int
 * @n: int
 *
 * Description - print the elements of an array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, j;

	for (j = 0; a[i] != '\0'; j++)
	{
	}
	if (j != n)
	{
		printf("\n");
		break;
	}
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else if (i == n - 1)
			printf("%d\n", a[i]);
	}
}
