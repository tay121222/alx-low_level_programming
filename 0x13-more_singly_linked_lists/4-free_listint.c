#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: pointer to head node
 */
void free_listint(listint_t *head)
{
	listint_t *node_to_free;

	while (head != NULL)
	{
		node_to_free = head;
		head = head->next;
		free(node_to_free);
	}
}
