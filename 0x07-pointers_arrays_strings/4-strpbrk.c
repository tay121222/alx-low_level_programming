#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to sreach from
 * @accept: string to find
 * Return: returns a pointer to the byte or NULL if no byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
