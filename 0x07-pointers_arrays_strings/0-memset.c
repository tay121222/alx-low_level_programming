#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: source string
 * @b: the constant byte
 * @n: length of byte
 * Return: New string
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}
