#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: string to print every toher character from
 */
void puts2(char *str)
{
	int len  = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

