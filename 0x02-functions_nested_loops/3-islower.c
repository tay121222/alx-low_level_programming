#include <stdio.h>
#include "main.h"

/**
 * _islower - check if alphabet is lower
 *
 *@c: Get value for function
 *
 * Return: retrurns 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
