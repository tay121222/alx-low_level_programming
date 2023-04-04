#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @src: memory source to cpy from
 * @dest: memory destination to copy to
 * @n: buffer length
 * Return: returns string @ memory destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
