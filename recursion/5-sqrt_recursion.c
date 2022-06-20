#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: int
 * @i: int
 *
 * Description -
 * Return: inr
 */
int _sqrt_aux(int n, int i);

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
/**
 * _sqrt_aux - check the root sqr of n and returns it as i
 * @n: int
 * @i: sqr root to check
 *
 * Description:
 * Return: return i if it is the root sqr of n
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
