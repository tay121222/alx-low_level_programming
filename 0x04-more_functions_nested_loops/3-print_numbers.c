#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 */
void print_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
