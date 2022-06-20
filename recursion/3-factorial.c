#include "main.h"
/**
 * factorial - returns the factorial of n
 * @m: int
 *
 * Description -
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
	{
		if (n == 0)
			return (1);
		return (n * factorial(n - 1));
	}
}
