#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly allocated space in memory...
 * @str: string pointer
 *
 * Description -
 * Return: a pointer to the duplicate string.
 */
char *_strdup(char *str)
{
	int i, j;
	char *t;

	if (str != NULL)
	{
		for (i = 0; str[i]; i++)
			;
		t = malloc(i + 1);
		if (t == NULL)
			return (NULL);
	/*Copy the string*/
		for (j = 0; str[j] != '\0'; j++)
		{
			t[j] = str[j];
		}
		t[j] = '\0';
		return (t);
	}
	else
	{
		return (NULL);
	}
}
