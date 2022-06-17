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
	int i, j;

	for (i = 0; s[i] != '\0'; i++) /*Obtengo largo de s - i*/
		;
	for (j = 0; s[j] != '\0'; j++)/*Obtengo primera aparicion de c - j*/
	{
		if (s[j] == c)
		{
			s = s + j;
			break;
		}
	}
	if (j < i)
		return (s);
	else
		return ('\0');
}
