#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index index of a linked list
 * @head: pointer to a pointer to first node of list
 * @index: index of node to delete
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prev = NULL;
	unsigned int i = 0;

	if (temp != NULL && index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);
	return (1);
}
