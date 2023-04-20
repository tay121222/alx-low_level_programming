#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	const char *c_in_format = format;
	int i = 0;
	va_list ap;
	char *s;

	va_start(ap, format);

	while (c_in_format[i] != '\0')
	{
		switch (c_in_format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
					printf("%s", "(nil)");
				else
					printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (c_in_format[i + 1]  != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
