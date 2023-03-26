#include "main.h"

/**
 * print_times_table - Function to print n times table
 * @n: value
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int res = i * j;
			int res_len = 0;
			int res_copy = res;

			if (res == 0)
			{
				_putchar('0');
			}
			else
			{
				while (res_copy != 0)
				{
					res_copy /= 10;
					res_len++;
				}
				while (res_copy != 0)
				{
					_putchar((res_copy % 10) + '0');
					res_copy /= 10;
				}
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
				if (res < 10)
				{
					_putchar(' ');
				}
				if (res < 100)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	return (0);
}
