#include <stdio.h>
/**
 * main - Print all the numbers of base 16
 * Return: 0 - Always
 */
int main(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
