#include <stdio.h>
/**
 * main - Print combinations of 3 digits in ascending order
 * Return: 0 - Always
 */
int main(void)
{
	int n1;
	int n2;
	int n3;

	for (n1 = 48; n1 <= 55; n1++)
	{
		for (n2 = n1 + 1; n1 <= 56; n2++)
		{
			for (n3 = n2 + 1; n3 <= 58; n3++)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if (n1 < 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
