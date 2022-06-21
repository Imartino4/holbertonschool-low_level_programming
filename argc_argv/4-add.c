#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positivee numbers
 * @argc: number of arguments
 * @argv: array with arguments
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
