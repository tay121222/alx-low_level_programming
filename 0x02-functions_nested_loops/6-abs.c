#include <stdio.h>
#include "main.h"

/**
 * _abs - function returns absolute values of integer
 *
 *@n: Get value for function
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
