#include "main.h"

/**
 * swap_int - swap values of 2 integers
 * @a: int
 * @b: int
 *
 * Description change the value of a to b and viceverse
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *b;
	*b = *a;
	*a = aux;
}
