#include <stdio.h>
/**
 * main - start of program ( prints all arguments it receives)
 * @argc: total count of arguments passed
 * @argv: array of arguments passed
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i <= (argc - 1))
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
