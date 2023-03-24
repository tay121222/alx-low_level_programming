#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: value from main to check
 * Return: Returns 1 if c is uppercase and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
