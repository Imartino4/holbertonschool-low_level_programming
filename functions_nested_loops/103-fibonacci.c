#include <stdio.h>
/**
 * main - sum the values of fibonacci lowers than 4000000
 * Return: 0
 */
int main(void)
{
	int i;
	long int n1 = 1;
	long int n2 = 2;
	long int Fib;

	for (i = 3; Fib <= 4000000; i++)
	{
		Fib = n1 + n2;
		n1 = n2;
		n2 = Fib;
	}
	printf("%ld\n", Fib);
	return (0);
}
