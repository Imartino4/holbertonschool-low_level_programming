#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - Calculator
 * @argc: quantity of arguments
 * @argv: pointer to array of arguments
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int resultado;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	if (((*argv[2]) == '/' || (*argv[2]) == '%')  && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	resultado = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", resultado);
	return (0);
}
