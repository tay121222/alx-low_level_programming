#include "main.h"
/**
 * _sqrt - actual function to find square root value of n
 * @a: same as n;
 * @b: iterates from 1 to n
 * @n: number to find its square root
 * Return: returns -1 if square toot not found or square root of n
 */
int _sqrt(int n, int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt(n, a, b + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to find it's square root
 * Return: returns -1 if square toot not found or square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}

	return (_sqrt(n, n, 1));
}
