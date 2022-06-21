#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: number of argument
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (*argv[0] != '\0')
		printf("%d\n", argc - 1);
	return (0);
}
