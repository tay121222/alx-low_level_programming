#include <stdio.h>
#include "main.h"

/**
 * times_table - unction that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i = 0, j = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			int final = i * j;

			if (final < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(final + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(final / 10 + '0');
				_putchar(final % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
