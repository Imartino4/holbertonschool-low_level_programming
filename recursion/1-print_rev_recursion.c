#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse recursively
 * @s: char
 *
 * Description -
 * Return_ void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
/**
 * Primero hace la recursion, cuando llega al nulo para y ejecuta todos
 * los putchar generados
 * Si el string viene sin salto de linea no logre poner un unico salto
 */
