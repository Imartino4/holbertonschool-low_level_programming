#include <stdio.h>

/**
 * main - Fibonacci of 98
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long fib;
	printf("1, 2, ");

	for (i = 1; i <= 98; i++)
	{
		fib = n2 + n1;
		n1 = n2;
		n2 = fib;
		printf("%lu, ", fib);
	}
	printf("\n");
	return (0);
}
