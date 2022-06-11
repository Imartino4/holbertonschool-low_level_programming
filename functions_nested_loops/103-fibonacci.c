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
	long int fibpar = 2;
	long int Fib;

	for (i = 3; i <= 4000000;)
	{
		Fib = n1 + n2;
		n1 = n2;
		n2 = Fib;
		if ((Fib % 2 == 0) && (Fib < 4000000))
		{
			fibpar = fibpar + Fib;
		}
		i = Fib;
	}
	printf("%ld\n", fibpar);
	return (0);
}
