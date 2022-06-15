#include "main.h"
/**
 * rev_string - reverse a string
 * @s: char
 *
 * Description - reverse a string,
 * el -1 es para no copiar el valor nulo y que siga quedando al final
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	int aux;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j < (i / 2); j++)
	{
		aux = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = aux;
	}
}
