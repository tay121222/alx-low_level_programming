#include <stdio.h>

/**
 * linear_search - function that searches for a value in an array
 * @array: pointer to the first element
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
