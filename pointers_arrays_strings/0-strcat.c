#include "main.h"
/**
 * *_strcat - concatenate two strings
 * @dest: char
 * @src: char
 *
 * Description - concatenate two strings
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = i; src[j - i] != '\0'; j++)
	{
		dest[j] = src[j - i];
	}
	dest[j] = '\0';
	return (dest);
}
