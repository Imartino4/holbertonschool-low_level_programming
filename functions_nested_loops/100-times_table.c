#include "main.h"

/**
 * print_times_table - print tables of multiplication
 * @n: int
 *
 * Description - the function recieves an int n and print the tables of nxn
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int m;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				m = i * j;
				if (m <= 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(m + '0');
				}
				if ((m <= 99) && (m > 9))
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				if (m >= 100)
				{
					_putchar(',');
					_putchar(32);
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
