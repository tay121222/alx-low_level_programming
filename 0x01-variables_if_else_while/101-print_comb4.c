#include <stdio.h>
/**
*main - starting point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n = 48, m = 49, l = 50;

	while (n < 58)
	{
		while (m < 58)
		{
			while (l < 58)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			}
			l = 50;
			m++;
		}
		m = n + 2;
		n++;
	}
	putchar('\n');
	return (0);
}
