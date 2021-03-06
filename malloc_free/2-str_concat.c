#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two strings and return pointer
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Description -
 * Return: pointer to string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *t;

	if (s1)
		len1 = strlen(s1);
	if (s2)
		len2 = strlen(s2);
	t = malloc(len1 + len2 + 1);
	if (t == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
	{
		t[0] = '\0';
		return (t);
	}
	if (s1 == NULL && s2 == NULL)
	{
		t[0] = '\0';
		return (t);
	}
	if (s1 && s2 == NULL)
	{
		for (i = 0; i < len1; i++)
			t[i] = s1[i];
		t[i] = '\0';
		return (t);
	}
	if (s2 && s1 == NULL)
	{
		for (i = 0; i < len2; i++)
			t[i] = s2[i];
		t[i] = '\0';
		return (t);
	}
	for (i = 0; i < len1; i++)
		t[i] = s1[i];
	for (j = i; s2[j - i]; j++)
		t[j] = s2[j - i];
	t[j] = '\0';
	return (t);
}
