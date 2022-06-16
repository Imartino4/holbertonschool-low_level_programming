#include "main.h"
/**
 * _memset - fills memory wit a constant byte
 * @s: char
 * @b: char
 * @n: unsigned int
 *
 * Description -
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= 95; i++)
		s[i] = b;
	return (s);
}
