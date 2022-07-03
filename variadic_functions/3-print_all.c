#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print everything
 * @format: list of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0;
	char *p;

	va_start(ptr, NULL);
		while (format != NULL && format[i] != '\0')
		{
			switch (format[i])
			{
				case('c'):/*El char pasa a int*/
					printf("%c", va_arg(ptr, int));
					break;
				case('i'):
					printf("%i", va_arg(ptr, int));
					break;
				case('f'):/*El float pasa a double*/
					printf("%f", va_arg(ptr, double));
					break;
				case('s'):
					p = va_arg(ptr, char *);
					if (p == NULL)
						printf("(nil)");
					printf("%s", p);
					break;
				default: /*Si no es ninguno de estos casos*/
					i++;
					continue; /*Salteate los otros pasos*/
			}
			if (format[i + 1] != '\0')
				printf(", ");
			i++;
		}
	printf("\n");
	va_end(ptr);
}
