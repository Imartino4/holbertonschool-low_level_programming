#include "main.h"

/**
 * print_triangle - Print a trinagle with #
 * @n: int
 *
 * Description - print a triangle, size of n
 * Return: void
 */
void print_triangle(int n)
{
	int i;
	int j;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < (n - i - 1); j++)
			{
				_putchar(32);
			}
			for (k = (n - i); k <= n; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
