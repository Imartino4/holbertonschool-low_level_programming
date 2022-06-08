#include "main.h"
/**
 * main - Print the alphabet using _putchar
 * Return: - Always
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
