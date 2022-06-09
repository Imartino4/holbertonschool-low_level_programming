#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: - int
 *
 * Description: the function recives an int and print and return the last digit
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar (ld + '0');
	return (ld);
}
