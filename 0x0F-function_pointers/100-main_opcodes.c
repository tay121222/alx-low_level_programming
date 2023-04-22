#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", ((char *)main)[i]);

		if (i != num_bytes - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
