#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural number from n to 98
 * @n: - int
 *
 * Description - receives a natural number n and print all numbers from n to98
 * Return: int
 */
int print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d, ", i);
		}
		printf("%d\n", i);
	}
	if (n >= 98)
	{
		for (i = n; i >= 99; i--)
		{
			printf("%d, ", i);
		}
		printf("%d\n", i);
	}
	return (0);
}
