#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print random number and say if it is greater, lower or equal than 6.
 * Return: 0 - Always
 */
int main(void)
{
		int n;
		int d;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		d = n % 10;

		if (n > 5)
		{
			if (d == 0)
			{
				printf("Last digit of %d is %d and is 0\n", n, d);
			else
			{
			printf("Last digit of %d is %d and is greater than 5\n", n, d);
			}
			}
		if (n <= 5);
		{
			if (d == 0)
			{
				printf("Last digit of %d is %d and is 0\n", n, d);
			}
			else
			{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, id);
			}
		}
return (0);
}
