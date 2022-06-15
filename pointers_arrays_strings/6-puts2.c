#include "main.h"
/**
 * puts2 - print every other character
 * @str: char
 *
 * Description -
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (j = 0; j <= i; j = j + 2)
	{
		if (str[j] != '\0')
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
