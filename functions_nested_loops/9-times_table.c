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
			if ((i * j) < 10)
			{
				_putchar ((i * j) + '0');
				_putchar(32);
			}
			else
			{
				_putchar (((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar('\n');
			}
		}
		j = 0;
	}
}
