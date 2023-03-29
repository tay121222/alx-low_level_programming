#include <stdio.h>
#include "main.h"
/**
 * _strcpy -  function that copies the string pointed to by src
 * @dest: point to the buffer
 * @src: string to copy
 *
 * Return: returns the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
