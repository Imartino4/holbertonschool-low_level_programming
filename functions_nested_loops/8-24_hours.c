#include "main.h"
/**
 * jack_bauer - print every minute of the day
 *
 * Description - printint 00:00 to 23:59
 * Return: 0
 */
int jack_bauer(void)
{
	char i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar ((i / 10) + '0');
			_putchar ((i % 10) + '0');
			_putchar (58);
			_putchar ((j / 10) + '0');
			_putchar ((j % 10) + '0');
			_putchar ('\n');
		}
		j = 0;
	}
	return (0);
}
