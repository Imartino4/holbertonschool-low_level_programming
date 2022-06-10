#include "main.h"

/**
 * print_line - receives an int n and print n lines
 * @n: int
 *
 * Description - print n lines
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i = 0)
		{	
			continue;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
