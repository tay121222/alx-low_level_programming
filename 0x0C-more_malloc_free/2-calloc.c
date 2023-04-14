#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function allocates memory for an array, using malloc
 * @nmemb: number of element to allocate mem
 * @size: size of each element
 *
 * Return: returns NULL or pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
