#include "main.h"
/**
 * _pow_recursion - return the value of c raised to the power of y
 * @x: int
 * @y: int
 *
 * Description -
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
