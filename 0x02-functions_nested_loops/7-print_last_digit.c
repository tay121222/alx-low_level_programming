#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 *@n: Get value for function
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_digitz = (n % 10);

	if (last_digitz >= 0)
	{
		_putchar(last_digitz + '0');
	}
	else
	{
		last_digitz = last_digitz * (-1);
		_putchar(last_digitz + '0');
	}
	return (last_digitz);
}
