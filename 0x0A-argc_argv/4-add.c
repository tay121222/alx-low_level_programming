#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - start of program
 * @argc: total count of argument
 * @argv: argument passed to program form commandline
 * Return: 0 if no number is passed, 1 if symbol found
 */
int main(int argc, char *argv[])
{
	int i = 1;
	long int sum = 0;

	if (argc <= 1)
	{
		printf("%ld\n", sum);
	}
	else
	{
		while (i <= (argc - 1))
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				if ((strtol(argv[i], NULL, 10) < 0))
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					sum += (strtol(argv[i], NULL, 10));
				}
			}
			i++;
		}
		printf("%ld\n", sum);
	}
	return (0);
}
