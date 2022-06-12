#include "main.h"
/**
 * print_number - function to print integers
 * @n: int
 *
 * Description - print the number int given
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10)
		print_number((n / 10));
	_putchar((n % 10) + '0');
}
