#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
	point->name = name;
	point->age = age;
	point->owner = owner;
	free(point);
	return (point);
}
