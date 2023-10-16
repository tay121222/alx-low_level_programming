#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (!list)
		return (NULL);
	current = list;
	while (current)
	{
		express = current->express;
		if (express)
		{
			printf("Value checked at index [%lu] = [%d]\n",
					express->index, express->n);
			if (express->n >= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n",
						current->index, express->index);
				break;
			}
			current = express;
		}
		else
		{
			while (current->next)
				current = current->next;
			printf("Value found between indexes [%lu] and [%lu]\n",
					current->index, current->index);
			break;
		}
	}
	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
		if (current->n == value)
			return (current);
		if (current->n > value)
			return (NULL);
		current = current->next;
	}
	return (NULL);
}
