#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string to locate char from
 * @c: character to locate in @s
 * Return: returns char found or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
