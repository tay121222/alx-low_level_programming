#include "main.h"
/**
 * _pow_recursion - Functions returns the value of x raised to the power of y
 * @x: number to get power from
 * @y: how many times x multiplies itself
 * Return: returns 0 if y < 0, 1 if y = 0 or value of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
