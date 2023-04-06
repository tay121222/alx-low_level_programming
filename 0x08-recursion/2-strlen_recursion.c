#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to get length
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (count + _strlen_recursion(s + 1));
	}
}
