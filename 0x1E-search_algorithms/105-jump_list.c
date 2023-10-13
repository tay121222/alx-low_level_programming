#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - search for a value in a sorted singly linked list
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: A pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, step, i;
	listint_t *prev, *cur;

	if (!list || size == 0)
		return (NULL);
	jump = (size_t)sqrt(size);
	prev = list;
	cur = list;
	while (cur->next && cur->n < value)
	{
		prev = cur;
		i = 0;
		while (cur->next && i < jump)
		{
			cur = cur->next;
			i++;
		}
		printf("Value checked at index [%lu] = [%d]\n", cur->index, cur->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, cur->index);
	step = prev->index;
	while (step <= cur->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
		step++;
	}
	return (NULL);
}
