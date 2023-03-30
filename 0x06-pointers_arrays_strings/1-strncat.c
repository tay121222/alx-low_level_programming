#include <stdio.h>
/**
 * _strncat - function concateneate 2 string
 * @dest: first string to concatenate
 * @src: second string to concatenate
 * @n: specifies the maximum number of bytes to be appended src
 * Return: returns the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i = 0;

	while (*p)
	{
		p++;
	}
	while (i < n && src[i])
	{
		*p++ = src[i++];
	}
	*p = '\0';

	return (dest);
}
