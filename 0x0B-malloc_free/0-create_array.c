#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: character to fill the array with
 *
 * Return: returns NULL if size is 0 or the array
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
