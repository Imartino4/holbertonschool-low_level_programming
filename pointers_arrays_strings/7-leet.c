#include "main.h"
/**
 * leet - encode into 1337
 * @c: char
 *
 * Description -
 * Return: char
 */
char *leet(char *c)
{
	char s1[] = "aeotl";
	char s2[] = "AEOTL";
	char s3[] = "43071";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == s1[j] || c[i] == s2[j])
				c[i] = s3[j];
		}
	}
	return (c);
}
