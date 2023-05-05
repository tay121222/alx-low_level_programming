#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to binary number
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int results = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			results = (results << 1) | 0;
		}
		else if (b[i] == '1')
		{
			results = (results << 1) | 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (results);
}
