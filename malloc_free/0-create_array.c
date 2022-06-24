#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array
 * @size: large of array
 * @c: chaar to print
 *
 * Description -
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		t = malloc(size * sizeof(char));
		if (t == NULL)
			return (NULL);
		for (i = 0; i <= size; i++)
		{
			t[i] = c;
			/*printf("%s, ", t);*/
		}
		return (t);
		free(t);
	}
}
