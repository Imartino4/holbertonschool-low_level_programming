#include <stdio.h>
/**
 * main - print name
 * @argc: number of arguments
 * @argv: array
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
