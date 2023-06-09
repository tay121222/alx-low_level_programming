#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * @n: the first number
 * @m: the second number
 *
 * Return: Number of bit to slip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = (n | m) & ~(n & m);
	unsigned int i = 0;

	while (diff)
	{
		i += (diff & 1);
		diff >>= 1;
	}

	return (i);
}
