#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings -  function that prints strings, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *vaarg;

	va_start(ap, n);

	while (i < n)
	{
		vaarg = (va_arg(ap, char*));
		if (vaarg == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", vaarg);
		}

		if (i != (n - 1) && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
