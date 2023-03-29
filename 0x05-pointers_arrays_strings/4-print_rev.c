#include "main.h"
/**
 * print_rev - prints characters in reverse
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int i, j;

	while (s[len] != '\0')
	{
		len++;
	}
	i = len;
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
