#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array setting in 0.
 * @nmemb: quantity of elements
 * @size: bytes of element's type
 *
 * Description -
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		t[i] = 0;
	}
	return (t);
}
