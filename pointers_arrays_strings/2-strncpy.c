#include "main.h"
/**
 ** *_strncpy - copy a string
 ** @dest: char
 ** @src: char
 ** @n: int
 **
 ** Description -
 ** Return: char
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; src[j] != '\0'; j++)
		;
	if (j <= n)
	{
		for (i = 0; i < j; i++)
			dest[i] = src[i];
		for (i = j; i < n; i++)
			dest[i] = '\0';
	}
	else if (j > n)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
