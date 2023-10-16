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
	size_t index;
	skiplist_t *current, *express;

	if (!list)
		return (NULL);
	current = list;
	while (current)
	{
		express = current;
		if (current->express)
		{
			while (express->express && express->express->n < value)
			{
				printf("Value checked at index [%lu] = [%d]\n",
						express->express->index, express->express->n);
				express = express->express;
			}
			printf("Value checked at index [%lu] = [%d]\n",
					express->index, express->n);
		}
		else
		{
			while (express->next)
				express = express->next;
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
				current->index, express->index);
		for (index = current->index; index <= express->index; index++)
		{
			printf("Value checked at index [%lu] = [%d]\n", index, current->n);
			if (current->n == value)
				return (current);
			current = current->next;
		}
		current = express->express;
	}
	return (NULL);
}
