#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies the arguments
 * @argc: number of arguments
 * @argv: arrays with the arguments
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
