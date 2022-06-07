#include <stdio.h>
/**
 * main - Print the alphabet in reverse
 * Return: 0 - Always
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
