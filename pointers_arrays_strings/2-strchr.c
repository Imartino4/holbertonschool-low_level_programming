#include "main.h"
/**
 * _strchr - Returns a ptr to the first occurrence of the char c in the string
 * @s: char
 * @c: char
 *
 * Description -
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s = s + 1;
	if (*s == c)
		return (s);
	else
		return ('\0');
}
