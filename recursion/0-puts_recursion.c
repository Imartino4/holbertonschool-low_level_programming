#include "main.h"
/**
 * _puts_recursion - print a string recursively
 * @s: char
 *
 * Description -
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(s[0]);
		 _puts_recursion(s + 1);
	}
	_putchar('\n');
}
