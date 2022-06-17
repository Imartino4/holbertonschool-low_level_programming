#include "main.h"
/**
 * _strspn - Return n bytes in initial segment of s
 * @accept: char
 * @s: char
 *
 * Description -
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int c = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != 32; j++)
		{
			if (accept[i] == s[j])
				c++;
		}
	}
	return (c);
}
