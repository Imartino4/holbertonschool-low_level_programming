#include "main.h"
/**
 * *_strcpy - returns the pointer to dest
 * @dest: char
 * @src: char
 *
 * Description - return the pointer to dest
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (src);
}
