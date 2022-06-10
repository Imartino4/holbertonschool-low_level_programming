#include "main.h"

/**
 * print_most_numbers - print 01356789
 *
 * Description - print 0 to 9 excepet 2 and 4
 * Return: 0;
 */
int print_most_numbers(void)
{
	int i;

	for (i = 0; i <10; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
	return (0);
}
