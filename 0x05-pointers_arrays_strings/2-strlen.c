#include "main.h"
/**
 * _strlen - return lenght of string
 * @s: string to get lenght
 * Return: returns the value of lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
