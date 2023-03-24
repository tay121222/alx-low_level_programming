#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		int m = 0;

		while (m <= 14)
		{
			if (m > 9)
			{
				_putchar('0' + (m / 10));
			}
			_putchar('0' + (m % 10));
			m++;
		}
		n++;
		_putchar('\n');
	}
}
