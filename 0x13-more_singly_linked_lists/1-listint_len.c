#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: Point to head of list
 *
 * Return: total number of node in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
