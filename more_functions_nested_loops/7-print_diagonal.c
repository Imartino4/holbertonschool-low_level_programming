#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: int
 *
 * Description - print a \ in diferent lines such as a diagonal line
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; i <= j; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
