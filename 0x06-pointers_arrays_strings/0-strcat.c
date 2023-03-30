#include <stdio.h>
/**
 * _strcat - function concateneate 2 string
 * @dest: first string to concatenate
 * @src: second string to concatenate
 *
 * Return: returns the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}
	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';

	return (dest);
}
