#include "main.h"
/**
 * *_strncat - concatenate two strings
 * @dest: char
 * @src: char
 * @n: int
 *
 * Description -
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (j = 0; src[j] != '\0'; j++) /*Largo de src incial */
		;
	for (i = 0; dest[i] != '\0'; i++) /*Largo de dest inicial */
		;
	if (n >= j)
	{
		for (k = i; src[k - i] != '\0'; k++)
			dest[k] = src[k - i];
		dest[k] = '\0';
	}
	else
		for (k = i; k < n + i; k++)
		dest[k] = src[k - i];
	return (dest);
}
