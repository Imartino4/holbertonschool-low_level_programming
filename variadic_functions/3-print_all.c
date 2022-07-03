#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0, j = 0;
	char *sep = ", ";/*Lo defino por la limitante de los if*/
	char *str;

	va_start(ptr, format);
	while (format[i] && format != NULL)/*Agrego && format por el caso nulo*/
		i++;
	while (format && j < i)
	{
		if (j == (i - 1))
			sep = "";
		switch (format[j])
		{
			case 'c':/*El char pasa a ser int-ver-*/
				printf("%c%s", va_arg(ptr, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(ptr, int), sep);
				break;
			case 'f':/*Float pasa a double*/
				printf("%f%s", va_arg(ptr, double), sep);
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		j++;
	}
	printf("\n");
	va_end(ptr);
}
