#include "lists.h"

/**
 * dlistint_len - function returns the number of elements in a list
 * @h: pointer to the head of list
 *
 * Return:the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
