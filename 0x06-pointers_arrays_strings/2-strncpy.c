#include "main.h"
/**
 * _strncpy - function that copies a string
 * @n: number of characters to copy
 * @src: string to copy n from
 * @dest: final results after the copy
 * Return: returns the results
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
