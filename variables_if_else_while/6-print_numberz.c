#include <stdio.h>
/**
 * main - Print 0 to 9 without using variables of type char and using puthcar
 * Return: 0 - Always
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
