#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times to print
 *
 * Return: returns line to print
 */
void print_diagonal(int n)
{
	int line, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (line = 0; line < n; line++)
	{
		for (space = 0; space < line; space++)
		{
			putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
