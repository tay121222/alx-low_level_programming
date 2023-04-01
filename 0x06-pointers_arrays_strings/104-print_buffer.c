#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function that prints a buffer
 * @b: buffer
 * @size: number of bytes to print
 */
void print_buffer(char *b, int size)
{
	int i, j;
	char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10 && i + j < size; j++)
		{
			printf("%02x", b[i + j]);
			if (j % 2 == 1)
			{
				printf(" ");
			}
		}
		for (; j < 10; j++)
		{
			printf("   ");
		}
		for (j = 0; j < 10 && i + j < size; j++)
		{
			c = b[i + j];
			if (c < 32 || c > 126)
			{
				printf(".");
			}
			else
			{
				printf("%c", c);
			}
		}
		printf("\n");
	}
}
