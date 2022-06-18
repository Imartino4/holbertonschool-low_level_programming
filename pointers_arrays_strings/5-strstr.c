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
	int i, j, l1, l2;

	i = 0;
	j = 0;
	for (l1 = 0; needle[l1] != '\0'; l1++)
		;
	for (l2 = 0; haystack[l2] != '\0'; l2++)
		;
	while (needle[j] != '\0')/*&& (haystack[i] != '\0'))*/
	{
		if (needle[j] == haystack[i])
			j++;
		else
			j = 0;
		i++;
	}
	/*printf("\ni=%d\nj=%d\nl1=%d\nl2=%d\n", i, j, l1, l2);*/
	if (needle[j] == '\0')
	{
		haystack = haystack + i - j;
		return (haystack);
	}
	else
		return ('\0');
}
