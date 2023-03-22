#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function to check lowercase and uppercase values
 *
 *@c: Get value for function
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
