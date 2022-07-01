#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum all the parameters
 * @n: quantity of arguments
 *
 * Return: the sum of the arguments, and 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(s, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(s, int);
	va_end(s);
	return (sum);
}
