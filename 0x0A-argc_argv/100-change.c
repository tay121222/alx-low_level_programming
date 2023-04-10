#include <stdio.h>
#include <stdlib.h>
/**
 * main - start of program
 * @argc: arguments count
 * @argv: argument array
 * Return: returns 1 if argument < 1, 0 if success
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int total_change = 0;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			cents = atoi(argv[1]);
			total_change += cents / 25;
			cents %= 25;

			total_change += cents / 10;
			cents %= 10;

			total_change += cents / 5;
			cents %= 5;

			total_change += cents / 2;
			cents %= 2;

			total_change += cents / 1;
			cents %= 1;

			printf("%d\n", total_change);
			return (0);
		}
	}
	return (0);
}
