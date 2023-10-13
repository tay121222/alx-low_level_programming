#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, low, high;
	double fraction;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		fraction = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		position = (size_t)(low + fraction);
		printf("Value checked array[%d]", (int)position);

		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[position]);
		}

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;

		if (low == high)
			break;
	}

	return (-1);
}

