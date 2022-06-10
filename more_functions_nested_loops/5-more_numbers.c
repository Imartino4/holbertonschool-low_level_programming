#include "main.h"

/**
* more_numbers - print from 0 to 14 10 times
*
* Description - print 0 to 14 10 times
* Return: void
*/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar((1 / 10) + '0');
				_putchar((1 % 10) + '0');
			}
			else
			{
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
