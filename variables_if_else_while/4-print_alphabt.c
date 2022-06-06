#include <stdio.h>
/**
 * main - Print the alphabet in lowercase with the excpetion of letter e and q
 * Return (0) - Always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
