#include <stdio.h>
#include "main.h"

/**
 * times_table - unction that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i = 0, j, final;

	while (i <= 9)
	{
		_putchar('0');
		j = 1;
		while (j <= 9)
		{
			_putchar(',');
			_putchar(' ');
			final = i * j;
			if (final <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((final / 10) + '0');
				_putchar((final % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
