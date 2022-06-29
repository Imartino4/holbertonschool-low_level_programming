#include <stdlib.h>
#include <stdio.h>
#include "calc.h"
/**
 * main -
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
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (((*argv[2]) == '/' || (*argv[2]) == '%')  && (atoi(argv[3]) == '0'))
	{
			printf("Error\n");
			exit(100);
	}
	resultado = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", resultado);
	return (0);
}
