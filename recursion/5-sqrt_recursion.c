#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: int
 *
 * Description -
 * Return: inr
 */
int _sqrt_aux(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
	{
		return (i);
	}
	else
	return (_sqrt_aux(n, i + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
	{
		return (0);
	}
	else
		return (_sqrt_aux(n, 1));
}
