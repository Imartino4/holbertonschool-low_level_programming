#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory
 * @d: pointer to a struct
 *
 * Description -
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
