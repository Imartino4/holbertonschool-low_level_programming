#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new variable
 * @name: pointer to string of a elementent's structure
 * @age: float
 * @owner: pointer to string of a element's structure
 *
 * Description -
 * Return: pointer to a structure.
 */
char *_strdup(char *str);
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *point;
	char *pname;
	char *powner;
	int len1 = 0, len2 = 0;

	if (name)
		len1 = strlen(name);
	if (owner)
		len2 = strlen(owner);
	point = malloc(sizeof(dog_t));
	if (point == NULL)
		return (NULL);
	pname = malloc(len1);
	if (pname == NULL)
		return (NULL);
	pname = _strdup(name);
	powner = malloc(len2);
	if (powner == NULL)
	{
		free(powner);
		free(pname);
		return (NULL);
	}
	owner = _strdup(owner);
	point->name = name;
	point->age = age;
	point->owner = owner;
	return (point);
	free (point);
}
/**
 * _strdup - return a pointer no a newly allocated space in memory
 * @str: pointer to string to copy
 *
 * Description -
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	int i, j;
	char *t;
	if (str)
	{
		for (i = 0; str[i]; i++)
			;
		t = malloc(i + 1);
		if (t == NULL)
			return (NULL);
		for (j = 0; str[j]; j++)
			t[j] = str[j];
		t[j] = '\0';
		free(t);
		return (t);
	}
	else
	{
		return (NULL);
	}
}
