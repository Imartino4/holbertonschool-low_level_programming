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
	if (c != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == c)
			{
				s = s + j;
				break;
			}
		}
		if (j < i)
			return (s);
	}
	return ('\0');
}
