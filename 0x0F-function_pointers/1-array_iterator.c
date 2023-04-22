#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: point to array
 * @size: size of the array
 * @action: a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
