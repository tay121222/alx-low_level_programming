#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print
 *
 * Return: returns line to print
 */
void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar(95);
		line++;
	}
	_putchar('\n');
}
