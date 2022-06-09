#include "main.h"
/**
 * times_table - print the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	char i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar(j + '0');
			}
			else
			{
				if ((i * j) < 10)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar ((i * j) + '0');
				}
				else
				{
					_putchar(44);
					_putchar(32);
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				if (j == 9)
				{
					_putchar('\n');
				}
			}
		}
		j = 0;
	}
}
