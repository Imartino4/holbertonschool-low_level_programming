#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print the strings entered by arguments
 * @separator: pointer to char used to separate
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *value;

	if (separator == NULL)
		separator = "";
	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(str, char *);
		if (value == NULL)
			value = "(nil)";
		printf("%s", value);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
/* Definir el value como puntero a char*/
