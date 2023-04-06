#include "main.h"
/**
 * _sqrt - actual function to find square root value of n
 * @a: lower bound of possible square root
 * @b: upper bound of possible square root
 * @n: number to find its square root
 * Return: returns -1 if square toot not found or square root of n
 */
int _sqrt(int n, int a, int b)
{
	int check_root;

	if (a > b)
	{
		return (-1);
	}
	check_root = (a + b) / 2;
	if ((check_root * check_root) == n)
	{
		return (check_root);
	}
	else if ((check_root * check_root) > n)
	{
		return (_sqrt(n, a, check_root - 1));
	}
	else
	{
		return (_sqrt(n, check_root + 1, b));
	}
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
	else
	{
		return (_sqrt(n, 1, n / 2));
	}
}
