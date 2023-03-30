#include "main.h"
/**
 * _strncpy - function that copies a string
 * @n: number of characters to copy
 * @src: string to copy n from
 * @dest: final results after the copy
 * return: returns the results
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
