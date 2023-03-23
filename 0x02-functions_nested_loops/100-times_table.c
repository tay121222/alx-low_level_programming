#include "main.h"

/**
 * print_times_table - Function to print n times table
 *
 * @n: value to print it's times table
 */
void print_times_table(int n)
{
	int i, j, final;

	if (n >= 0 && n <= 14)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				final = i * j;
				if (j == 0)
				{
					_putchar('0' + final);
				}
				else
				{
					if (final < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(final + '0');
					}
					else if (final < 100)
					{
						_putchar(' ');
						_putchar('0' + (final / 10));
						_putchar('0' + (final % 10));
						_putchar((final % 10) + '0');
					}
					else
					{
						_putchar('0' + (final / 100));
						_putchar('0' + (final / 10) % 10);
						_putchar('0' + (final % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
