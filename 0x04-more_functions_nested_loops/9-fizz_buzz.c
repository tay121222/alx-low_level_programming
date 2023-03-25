#include <stdio.h>

/**
 * main - start of program
 *
 * Return: always return 0 (Success)
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if ((n % 5 == 0) && (n % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("\n");
	return (0);
}
