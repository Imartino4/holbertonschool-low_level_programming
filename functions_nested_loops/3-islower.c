#include <stdio.h>
#include "main.h"
/**
 * _islower - return 1 if the input is a lowercase and 0 otherwise.
 * @c: int to be checked
 *
 * Description: _islower evaluate c if is a lowercase or not
 * Return: 1 or 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);

}
