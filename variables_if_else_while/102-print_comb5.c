#include <stdio.h>
/**
 * main - Print all possible combinations of two two digits
 * Return: 0 - Always
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
		putchar((n1 / 10) + '0');
		putchar((n1 % 10) + '0');
		putchar(32);
		putchar((n2 / 10) + '0');
		putchar((n2 % 10) + '0');
		if (n1 != 98)
		{
			putchar(44);
			putchar(32);
		}
		}
	}
	putchar ('\n');
	return (0);
}
