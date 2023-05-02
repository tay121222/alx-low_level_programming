#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the head of list
 * @index: index of nth node to retrieve
 *
 * Return: NULL if index not found ot node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_to_return = head;
	unsigned int count = 0;

	while (node_to_return)
	{
		if (count == index)
			return (node_to_return);
		count++;
		node_to_return =  node_to_return->next;
	}

	return (NULL);
}
