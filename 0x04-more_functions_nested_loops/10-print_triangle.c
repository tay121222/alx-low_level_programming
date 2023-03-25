#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function prints a triangle
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int no_of_rows = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (no_of_rows < size)
	{
		int no_of_cols = 0;

		while (no_of_cols < (size - no_of_rows - 1))
		{
			_putchar(' ');
			no_of_cols++;
		}
		no_of_cols = 0;
		while (no_of_cols <= no_of_rows)
		{
			_putchar(35);
			no_of_cols++;
		}
		_putchar('\n');
		no_of_rows++;
	}
}
