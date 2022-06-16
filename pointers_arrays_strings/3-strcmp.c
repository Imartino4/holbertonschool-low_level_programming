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
	int i, j, r;

	for (i = 0; s2[i] != '\0'; i++)
		;
	for (j = 0; s1[i] != '\0'; j++)
		;
	if (j > i)
		r = 15;
	else if (j == i)
		r = 0;
	else if (j < i)
		r = -15;
	return (r);
}
