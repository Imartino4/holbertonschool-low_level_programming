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
	char *t = NULL;

	if (s1)
		len1 = strlen(s1);
	if (s2)
		len2 = strlen(s2);
	t = malloc(len1 + len2 + 1);
	if (t != NULL)
	{
		for (i = 0; i < len1; i++)
			t[i] = s1[i];
		for (j = i; s2[j - i]; j++)
			t[j] = s2[j - i];
		t[j] = '\0';
	}
	return (t);
}
