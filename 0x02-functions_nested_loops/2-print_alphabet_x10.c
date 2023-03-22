#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Generate the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		n++;
	}
}
