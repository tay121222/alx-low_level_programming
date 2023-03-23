#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers
 *
 * @n: Get value for the function
 */
void print_to_98(int n)
{
	int i = n;

	while (i <= 98)
	{
		printf("%d ", i);
		if (i < 98)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
