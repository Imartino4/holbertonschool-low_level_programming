#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print numbers entered by parameters
 * @separator: pointer to char used to separate the numbers
 * @n: quantity of parameters-
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	int value = 0;
	unsigned int i;

	va_start(pn, n);

	if (n != 0)
	{
		if (separator == NULL)
			separator = "";
		for (i = 0; i < n; i++)
		{
			value = va_arg(pn, int);
			if (i < n - 1)
				printf("%d%s", value, separator);
			if (i >= n - 1)
				printf("%d\n", value);
		}
	}
}
