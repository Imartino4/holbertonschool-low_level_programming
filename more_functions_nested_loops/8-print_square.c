#include "main.h"

/**
 * print_square - print a square with #
 * @n: int
 *
 * Description - print a nxn square with #
 * Return: void
 */
void print_square(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0, i < n; i++)
		{
			for (j = 0, j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
