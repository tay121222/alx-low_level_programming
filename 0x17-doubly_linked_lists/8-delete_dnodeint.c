#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index index of a list
 * @head: pointer to pointer to head of list
 * @index: index of the node that should be deleted
 *
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;

	if (head == NULL)
		return (-1);
	current = *head;

	if (index == 0)
	{
		if (current == NULL)
			return (-1);
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (; current; current = current->next, index--)
	{
		if (index - 1 == 0)
		{
			temp = current->next;
			if (!temp)
				break;
			current->next = temp->next;
			if (temp->next)
				temp->next->prev = current;
			free(temp);
			return (1);
		}
	}

	return (-1);
}

