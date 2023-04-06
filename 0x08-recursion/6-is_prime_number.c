#include "main.h"
/**
 * check_prime - check if number is prime
 * @n: number to check
 * @i: use to check if number is a prime number
 * Return: returns 1 if n is a prime number and 0 if it isn't
 */
int check_prime(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	else if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: returns 1 if n is a prime number and 0 if it isn't
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
