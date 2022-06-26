#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: quantity of arguments
 * @av: array of arguments
 *
 * Description -
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0, k, n, len = 0;
	char *t = NULL;

	if (av == NULL || ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len = len + 1;
	}
	n = len + ac + 1;
	/*printf("%d\n", n);*/
	t = malloc(n);
	if (t == NULL)
		return (NULL);
	i = 0;
	j = 0;
	for (k = 0; av[i]; k++)
	{
		t[k] = av[i][j];
		j++;
		if (av[i][j] == '\0')
		{
			if (k < n)
			t[k + 1] = '\n';
			k++;
			i++;
			j = 0;
		}
	}
	t[k] = '\0';
	/*printf("%d\n", k);*/
	return (t);
}
