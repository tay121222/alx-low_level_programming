#include <stdio.h>
#include <stdlib.h>
/**
 * main - start of program (multiplies two numbers)
 * @argv: array of arguments passed which should contain 2 numbers
 * @argc: total count of arguments passed
 * Return: Always 0 as success and 1 as Error
 */
int main(int argc, char *argv[])
{
	long int product;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = (strtol(argv[1], NULL, 10)) * (strtol(argv[2], NULL, 10));
		printf("%ld\n", product);
		return (0);
	}
}
