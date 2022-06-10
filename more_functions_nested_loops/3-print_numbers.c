#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 * 
 * Description - print number from 0 to 9 using putchar
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
}