#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initalize cariable of type struct dog
 *@d: pointer to struct dog
 *@name: pointer to name
 *@age: dog's age
 *@owner: dog's owner pointer to string
 *
 * Description -
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
