#include <stdio.h>

/**
 * main - program entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num = 612852475143;
	int largestFactor = 2;
	int factor = 2;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
			largestFactor = factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%d\n", largestFactor);

	return (0);
}
