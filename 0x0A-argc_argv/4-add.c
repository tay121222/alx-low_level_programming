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
	char *endptr;
	long int value;

	if (argc <= 1)
	{
		printf("%d\n", 0);
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
				value = strtol(argv[i], &endptr, 10);

				if (*endptr != '\0' || value < 0)
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					sum += (strtol(argv[i], &endptr, 10));
				}
			}
			i++;
		}
		printf("%ld\n", sum);
	}
	return (0);
}
