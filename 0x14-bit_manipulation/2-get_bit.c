#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number which conatins bit
 * @index: index, starting from 0 of the bit
 *
 * Return: the bit or -1 if no success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1 << index;
	bit = (n & mask) ? 1 : 0;

	return (bit);
}
