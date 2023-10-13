#include <stdio.h>
#include "search_algos.h"

/**
 * recursive_loop - perform binary search recursively
 * @array: pointer to the first element of the array
 * @left: left boundary of the array
 * @right: right boundary of the array
 * @value: value to search for
 *
 * Return: index of the first occurrence of value, or -1
 */
int recursive_loop(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
		}

		if (array[mid] < value)
			return (recursive_loop(array, mid + 1, right, value));
		else
			return (recursive_loop(array, left, mid, value));
	}

	return (-1);
}

/**
 * advanced_binary - Search for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: value to search for.
 *
 * Return: index of value located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_loop(array, 0, size - 1, value));
}
