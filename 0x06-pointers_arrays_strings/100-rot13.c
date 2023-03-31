#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @x: string to encode
 * Return: returns encoded string
 */

char *rot13(char *x)
{
	int i = 0, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (x[i])
	{
		j = 0;
		while (j < 52)
		{
			if (a[j] == x[i])
			{
				x[i] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (x);
}
