#include "main.h"
#include <stdlib.h>
/**
 * binary_to_unit - converts a binary into an unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: ui number, 0 if there is a different char that 0 or 1 or b es null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, pow = 1;
	int len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;		
	while (len - 1 >= 0)
	{
		if (b[len] == '1')
		{
			count = count + pow;
		}
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		len--;
		pow = pow * 2;
	}
	return (count);
}
