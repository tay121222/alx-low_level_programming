#include <stdio.h>
/**
 * main - start of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0, j = 1, k = 2;

	printf("%d, %d ", j, k);
	while (n < 98)
	{
		int i = j + k
			;
		printf("%d", i);
		n++;
		if (n < 98)
		{
			printf(", ");
		}
		j = k;
		k = i;
	}
	printf("\n");

	return (0);
}
