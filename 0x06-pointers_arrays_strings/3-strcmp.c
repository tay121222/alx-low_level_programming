#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: returns the difference between
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
