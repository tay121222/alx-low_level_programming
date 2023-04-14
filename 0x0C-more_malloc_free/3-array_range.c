#include <stdlib.h>
#include "main.h"
/**
 * array_range -  function creates an array of integers
 * @min: min integer
 * @max: mas integer
 *
 * Return: returns pointer to created array or NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}

	return (arr);
}
