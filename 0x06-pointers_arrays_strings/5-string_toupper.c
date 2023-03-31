#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @s: string to change to upper
 * Return: returns string changed to caps
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 'a' - 'A';
		}
	}

	return (s);
}
