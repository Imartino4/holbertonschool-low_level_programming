#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number given as argument to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int count = 0, i;
	unsigned long int n_aux;

	n_aux = n;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	else if (n == 1)
	{
		_putchar ('1');
		return;
	}
	while (n_aux >> 1 > 0)
	{
		count++;
		n_aux = n_aux >> 1;
	}
	for (i = count; i >= 0; i--)
	{
		if (n >> i & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
