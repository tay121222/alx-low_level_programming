#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48, m = 49;

	while (n <= 56)
	{
		while (m <= 57)
		{
			if (m > n)
			{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
			}
			m++;
		}
		m = 48;
		n++;
	}
	putchar('\n');

	return (0);
}
