#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 6
/**
 * main - program that generates random valid passwords
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int password[100];
	int i, sum, random_num;

	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		sum += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			random_num = 2772 - sum - '0';
			sum += random_num;
			putchar(random_num + '0');
			break;
		}
	}
	return (0);
}
