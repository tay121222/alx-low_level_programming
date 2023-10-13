#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, left, right, prev;

	if (array == NULL || size == 0)
		return (-1);

	jump = (int) sqrt((double)size);
	left = 0;
	right = 0;
	prev = 0;

	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		prev = right;
		left++;
		right = jump * left;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, right);

	for (; prev <= right && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}

