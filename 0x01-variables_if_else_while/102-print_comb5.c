#include <stdio.h>
/**
 * main - Starting Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0, j = 0;

	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			if (i != j)
			{
				putchar('0' + (i / 10));
				putchar('0' + (i % 10));
				putchar(' ');
				putchar('0' + (j / 10));
				putchar('0' + (j % 10));
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
