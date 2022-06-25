#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	int i, j, k;
	char *t;
	/*Calculo largos de s1 y s2*/
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	t = malloc(sizeof(*s1) + sizeof (*s2) - 1);/*sizeof ya considera el \0)*/
	if (t == NULL)
		return (NULL);
	for (k = 0; s1[k]; k++)
		t[k] = s1[k];
	for (k = i; s2[k - i]; k++)
		t[k] = s2[k - i];
	t[k] = '\0';
	return (t);
}
