#include <stdio.h>
/**
 * main - program start
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0, i = 1;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5) == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
