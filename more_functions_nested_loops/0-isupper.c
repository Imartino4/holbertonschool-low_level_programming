#include "stdio.h"

/**
 * _isupper - Check if the character is uppercase
 * @c: - character
 *
 * Description: check if the character is an uppercase and return 1
 * Return: 1 or 0
 */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
