#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _binary_search - Searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @left: start index of the array to search
 * @right: end index of the array to search
 * @value: The value to search for
 *
 * Return: If the value is not present or the array is NULL, -1
 *
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Return: If the value is not present or the array is NULL, -1.
 *
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 0, right_bound;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (index = 1; index < size && array[index] <= value; index = index * 2)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}

	right_bound = index < size ? index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n",
			index / 2, right_bound);
	return (_binary_search(array, index / 2, right_bound, value));
}
