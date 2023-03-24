#include <stdio.h>
#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: number of times to print
 *
 * Return: returns line to print
 */
void print_square(int size)
{
	int line, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (line = 0; line < size; line++)
	{
		for (space = 0; space < size; space++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
