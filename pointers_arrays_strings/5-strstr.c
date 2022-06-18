#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: char
 * @needle: char
 *
 * Description -
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;
	j = 0;
	for (k = 0; needle[k] != '\0'; k++)
		;
	while ((needle[j] != '\0'))
	{
		if (needle[j] == haystack[i])
			j++;
		else
			j = 0;
		i++;
	}
	/**printf("\n%d\n%d\n", i, j);*/
	haystack = haystack + i - j;
	if (j == k)
		return (haystack);
	else
		return (NULL);
}
