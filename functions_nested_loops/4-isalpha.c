#include "main.h"
/**
 * _isalpha - Check for alphabetic character
 * @c: int
 *
 * Description: _isalpha evaluate if c is alph char and return 1 if it is.
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
