#include<stdio.h>

/**
 * main - Program Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if ((alphabet != 'q') && (alphabet != 'e'))
		{
			putchar(alphabet);
			alphabet++;
		}
		else
		{
			alphabet++;
		}
	}
	putchar('\n');

	return (0);
}
