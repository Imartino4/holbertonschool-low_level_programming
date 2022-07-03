#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - suma de los argumentos.
 * @format: argumentos.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list variable;
	int i = 0;
	char *p;

	va_start(variable, format);
		while (format != NULL && format[i] != '\0')
		{
			switch (format[i])
			{
				case('c'):
					printf("%c", va_arg(variable, int));
					break;
				case('i'):
					printf("%i", va_arg(variable, int));
					break;
				case('f'):
					printf("%f", va_arg(variable, double));
					break;
				case('s'):
					p = va_arg(variable, char *);
					if (p == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", p);
					break;
				default:
					i++;
					continue;
			}
			if (format[i + 1] != '\0')
				printf(", ");
			i++;
		}
	printf("\n");
	va_end(variable);
}
