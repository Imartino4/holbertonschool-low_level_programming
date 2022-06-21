#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: int to check if it is prime number
 * @i: int
 *
 * Description -
 * Return: 1 if n is prime and 0 otherwise.
 */
int prime_aux(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (prime_aux(n, 2));
}
/**
 * prime_aux - check if the number is prime recursively
 * @n: int - number to be checked
 * @i: int - divisor
 *
 * Description -
 * Return: 1 if n is prime and 0 otherwhise.
 */
int prime_aux(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
	{
		return (0);
	}
	else
		return (prime_aux(n, i + 1));
}
