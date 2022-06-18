#include "main.h"
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
	while (haystack[i] != '\0' || j < k)
	{
		if (needle[j] == haystack[i])
		{
			i = i + 1;
			j = j + 1;
		}
		else
		{
			i++;
			j = 0;
		}
	}
	haystack = haystack + i - j;
	if (j == k)
		return (haystack);
	else
		return ('\0');
}
