#include <stdio.h>

/**
 * main - Fibonacci of 98
 * Return: 0
 */
int main(void)
{
	int i;
	long double n1 = 1;
	long double n2 = 2;
	long double fib;
	printf("1, 2, ");

	for (i = 1; i <= 98; i++)
	{
		fib = n2 + n1;
		n1 = n2;
		n2 = fib;
		printf("%.0Lf, ", fib);
	}
	printf("\n");
	return (0);
}
