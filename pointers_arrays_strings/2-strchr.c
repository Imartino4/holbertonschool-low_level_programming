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
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = 0; s[j] != c; j++)
		;
	for (k = j; k < i; k++)
		s[k - j] = s[k];
	s[i] = '\0';
	return (s);
}
