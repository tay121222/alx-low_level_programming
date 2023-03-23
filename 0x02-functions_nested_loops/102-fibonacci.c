#include <stdio.h>
/**
 * main - start of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a = 1, b = 2, c, run = 2;

	printf("%ld, %ld", a, b);
	while (run < 50)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
		run++;
	}
	printf("\n");

	return (0);
}
