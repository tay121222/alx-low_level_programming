#include <stdio.h>
#include "main.h"

/**
 * int_abs - function returns absolute values of integer
 *
 *@int: Get value for function
 *
 * Return: returns absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}
