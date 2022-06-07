#include <stdio.h>
/**
 * main - Print al possible different combinations of two digits
 * Return: 0 - Always
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = n1 + 1; n2 <= 57; n2++)
		{
			putchar(n1);
			putchar(n2);
			if (n1 < 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
