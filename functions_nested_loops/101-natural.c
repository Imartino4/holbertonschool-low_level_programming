#include <stdio.h>
/**
 * main - sum the multiples of 3 and 5 below 1024
 * Return: 0
 */
int main(void)
{
	int i;
	int aux = 0;

	for (i = 1; i < 1024; i++)
	{
		if (((i % 3 == 0) && (i % 5 == 0)) || ((i % 3 == 0) || (i % 5 == 0)))
		{
			aux = aux + i;
		}
	}
	printf("%d\n", aux);
	return (0);
}
