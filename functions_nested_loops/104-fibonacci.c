#include <stdio.h>

/**
 * main - Fibonacci of 98
 * Return: 0
 */
int main(void)
{
	int i;
	long double fib;

	long double n1 = 1;
	long double n2 = 2;

	printf("1, 2, ");

	for (i = 1; i <= 96; i++)
	{
		fib = n1 + n2 ;
		n1 = n2;
		n2 = fib;
		if (i < 96)
		{
			printf("%.0Lf, ", fib);
		}
		else
		{
			printf("%.0LF", fib);
		}
	}
	printf("\n");
	return (0);
}
