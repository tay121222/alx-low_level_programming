#include <stdio.h>
/**
 * main - Prints the name of program (Program Start)
 * @argc: number of argument passed
 * @argv: array of actual arguments passed
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
