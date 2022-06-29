#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
		return (t);
	}
	else
	{
		return (NULL);
	}
}
/**
 * new_dog - creates a new variable
 * @name: pointer to string of a elementent's structure
 * @age: float
 * @owner: pointer to string of a element's structure
 *
 * Description -
 * Return: pointer to a structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *point;

	point = malloc(sizeof(dog_t));
	if (point == NULL)
		return (NULL);
	point->name = _strdup(name);
	if (point->name == NULL)
	{
		free(point);
		return (NULL);
	}
	point->owner = _strdup(owner);
	if (pointer->owner == NULL)
	{
		free(point->name);
		free(point);
		return (NULL);
	}
	point->age = age;
	return (point);
}
