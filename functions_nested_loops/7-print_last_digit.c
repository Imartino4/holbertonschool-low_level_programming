#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @c: - int 
 *
 * Description: the function recives an int and print and return the last digit
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n = n * -1;
	}
	ld = n % 10;
	_putchar (ld + '0');
	return (ld);
}
