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
	while (*haystack != '\0')
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*haystack == *p2)
		{
			haystack++;
			p2++;
		}
		if (*p2 == '\0')
			return p1;
		haystack = p1 + 1;
	}
	return ('\0');
}
