#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @s: char
 *
 * Description -
 * Return: char
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= '<')
			s[0] = s[0] - 32;
		if (s[i] == '\n' || s[i] == 32 || s[i] == '.' || s[i] == 9)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
		else if (s[i] == ',' || s[i] == 59 || s[i] == 33 || s[i] == 63)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
		else if (s[i] == 34 || s[i] == 40 || s[i] == 41 || s[i] == '{')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= '<')
				s[i + 1] = s[i + 1] - 32;
		}
		else if (s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
