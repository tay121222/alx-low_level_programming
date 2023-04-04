#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array
 * @size: size of square matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i <= (size - 1); i++)
	{
		sum1 = sum1 + *(a + (size + 1) * i);
		sum2 = sum2 + *(a + (size - 1) * (i + 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
