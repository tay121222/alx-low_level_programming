#include "main.h"
/**
 * _strspn - Functions that gets the length of aprefic substring
 * @s: string to search from
 * @accept: string char to search for
 * Return: returns number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	char *a;
	unsigned int count = 0;

	while (*p != '\0')
	{
		a = accept;
		while (*a != '\0' && *p != *a)
		{
			a++;
		}
		if (*a == '\0')
		{
			return (count);
		}
		count++;
		p++;
	}

	return (count);
}
