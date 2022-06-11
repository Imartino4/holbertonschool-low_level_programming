#include <stdio.h>
/**
* main - print the first 50 Fibonacci
* Return: 0
*/
int main(void)
{
	int i;
	long int n1 = 1;
	long int n2 = 2;
	long int Fib;

	printf("1, 2, ");
	for (i = 3; i <=50; i++)
	{
		Fib = n1 + n2;
		n1 = n2;
		n2 = Fib;
		if (n != 50)
		{
			printf("%ld, ", Fib);
		}
		else
		{
			printf("%ld\n", Fib);
	}
	return (0);
}
