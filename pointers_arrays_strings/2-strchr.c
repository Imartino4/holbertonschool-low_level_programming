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
	int i = 0;

	while( s[i] != c && s[i] != '\0')
	{
		i++;
		s = s + i;
	}
	if (s[i] == c)
		return s;
	else
		return ('\0');
}
