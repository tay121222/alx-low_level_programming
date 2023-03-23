#include <stdio.h>
/**
 * main - start of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1, b = 2, c, run = 2;

	printf("%d, %d", a, b);
	while (run < 50)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
		run++;
	}
	printf("\n");

	return (0);
}
