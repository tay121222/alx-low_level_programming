#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	int i = n;

	while (i <= 98)
	{
		printf("%d ", i);
		i++;
	}
	printf("\n");
}
