#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: pointer to string1
 * @s2: pointer to string2
 * @n: unsigned int to compare
 *
 * Description -
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, l, i, j;
	char *t;

	m = 0;
	l = 0;
	if (s2)
		m = strlen(s2);
	if (s1)
		l = strlen(s1);
	if (n < m)
		m = n;
	t = malloc(m + l + 6);
	if (t == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2)
	{
		for (i = 0; s2[i] != '\0'; i++)
			t[i] = s2[i];
		t[i] = '\0';
		return (t);
	}
	if (s2 == NULL && s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
			t[i] = s1[i];
		t[i] = '\0';
		return (t)
	}
	else
	{
	for (i = 0; s1[i] != '\0'; i++)
		t[i] = s1[i];
	for (j = i; j < (i + m); j++)
		t[j] = s2[j - i];
	t[j] = '\0';
	return (t);
	}
}
