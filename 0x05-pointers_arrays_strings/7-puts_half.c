#include "main.h"
/**
 * puts_half - splits string into two and print the other half
 * @str: string to split
 */

void puts_half(char *str)
{
	int len = 0;
	int i, begin;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		begin = len / 2;
	}
	else
	{
		begin = (len - 1) / 2;
	}

	for (i = begin; i < len; i++)
	{
		_putchar(str[i]);
	}

	putchar('\n');
}
