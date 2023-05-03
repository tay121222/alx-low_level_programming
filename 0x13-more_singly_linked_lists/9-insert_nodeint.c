#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new noden
 * @head: points to the head
 * @idx: index of where the new node
 * @n: new_node value
 * Return: points to new note
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *c_node = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (i < (idx - 1))
	{
		if (c_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		c_node = c_node->next;
		i++;
	}

	new_node->next = c_node->next;
	c_node->next = new_node;

	return (new_node);
}
