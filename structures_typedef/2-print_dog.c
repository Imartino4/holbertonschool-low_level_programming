#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog variable
 *
 * Description -
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\nAge: %f\nOwner: %s\n", (*d).age, (*d).owner);
		if ((*d).age == 0)
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", (*d).name, (*d).owner);
		if ((*d).owner == NULL)
			printf("Name: %s\nAge: %f\nOwner: (nil)\n", (*d).name, (*d).age);
		else
			printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
