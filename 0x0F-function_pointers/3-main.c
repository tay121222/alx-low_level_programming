#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of argument
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	op_func = get_op_func(operator);

	if (operator[1] != '\0')
	{
		puts("Error");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		puts("Error");
		exit(100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
