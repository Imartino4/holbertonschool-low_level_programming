#include <stdio.h>
#include <stdlib.h>
/**
 * main - random number
 * Return: 0 - Always
 */
int main(void)
{
	srand(time(0));
	int n = rand();

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
return (0);
}
