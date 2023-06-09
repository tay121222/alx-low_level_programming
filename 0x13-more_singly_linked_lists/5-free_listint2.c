#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: pointer to a pointer to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *node_to_free;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		node_to_free = (*head)->next;
		free(*head);
		*head = node_to_free;
	}
	*head = NULL;
}
