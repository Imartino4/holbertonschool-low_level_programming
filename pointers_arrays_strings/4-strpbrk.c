#include "main.h"
/**
 * _strpbrk - search a string for any of a set ot bytes
 * @s: char
 * @accept: char
 *
 * Description -  locates the first occurrence in the string s of
 * any of the bytes in the string accept
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int l, i, j, aux;

	for (l = 0; s[l] != '\0'; l++)/*Obtengo el largo de s*/
		;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				if (j <= l)
				{
					l = j;/*Asi me quedo con el que ocurre primero*/
					aux = 1;
				}
			}
		}
	}
	s = s + l;
	if (aux == 1)
		return (s);
	else
		return ('\0');
}
