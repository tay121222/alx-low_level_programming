#include <stdio.h>
#include "search_algos.h"

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
	size_t left, right, i;
	int mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
		}

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid;

	}

	return (-1);
}
