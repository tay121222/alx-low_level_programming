#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of argument passed
 * @argv: array of actual arguments passed
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
