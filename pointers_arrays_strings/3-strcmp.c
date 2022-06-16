#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: char
 * @s2: char
 *
 * Desciption -
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, n, r;

	for (i = 0; s2[i] != '\0'; i++)
		;
	for (j = 0; s1[j] != '\0'; j++)
		;
	if (j >= i)
		n = i;
	else if (i > j)
		n = j;
	i = 0;
	r = 0;
	for (i = 0; i <= n; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	r = s1[i] - s2[i];
	return (r);
}
