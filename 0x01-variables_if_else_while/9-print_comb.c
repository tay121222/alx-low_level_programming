#include<stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n == 9)
		{
			putchar('\n');
			n++;
		}
		else
		{
			putchar(',');
			putchar(' ');
			n++;
		}
	}
	return (0);
}
