#include <stdio.h>
/**
 * main - start of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1, j = 2, k, n = 98;

	printf("%d, %d", i, j);
	while (n > 2)
	{
		k = i + j;
		printf(", %d", k);
		i = j;
		j = k;
		n--;
	}
	printf("\n");

	return (0);
}
