#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Generate the alphabet
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
