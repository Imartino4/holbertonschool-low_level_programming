#include <stdio.h>
/**
 * main - Print 0, 1, ... 9 using putchar and without using char variables
 * Return: 0 - Always
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
