#include "main.h"
/**
 * _abs - Return the absolute value
 * @n: int
 *
 * Description: _abs evaluate n and returns the absolute value
 * Return: Absolute number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
