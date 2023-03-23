# include <stdio.h>
/**
 * main - start of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1, j = 2, next = 0, sum = 2;

	while (next <= 4000000)
	{
		next = i + j;
		if (next % 2 == 0)
		{
			sum += next;
		}
		i = j;
		j = next;
	}
	printf("%d\n", sum);

	return (0);
}
