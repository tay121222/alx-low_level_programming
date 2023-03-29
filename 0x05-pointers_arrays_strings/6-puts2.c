#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: string to print every toher character from
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
