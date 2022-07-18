#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary into an unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: ui number, 0 if there is a different char that 0 or 1 or b es null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, pow = 1;
	int i = 0, len;

	if (!b)
		return (0);
	while (b[i])
		i++;
	len = i - 1;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] == '1')
			count += pow;
		len--;
		pow = pow * 2;
	}
	return (count);
}
