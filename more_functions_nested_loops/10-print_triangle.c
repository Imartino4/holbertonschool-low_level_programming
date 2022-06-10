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

	if ( n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			for (j = 1; j < (n - i); j++)
			{
				_putchar(32);
			}
			for (k = (i - n); k <= n; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
