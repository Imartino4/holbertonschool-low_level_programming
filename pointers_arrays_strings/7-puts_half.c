#include "main.h"
/**
 * puts_half - print half of a string
 * @str: char
 *
 * Description -
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 != 0)
	{
		n = (i + 1) / 2;
	}
	else
	{
		n = i / 2;
	}
	for (j = n; j <= i; j++)
	{
		if (str[j] != '\0')
		{
			_putchar(str[j]);
		}
	}
	_putchar ('\n');
}
