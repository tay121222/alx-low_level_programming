#include "main.h"
/**
 * leet - Function that encodes a string into 1337
 * @s: string to encode
 * Return: returns encoded string
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "443307711";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (letters[j])
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
			j++;
		}
		i++;
	}

	return (s);
}
