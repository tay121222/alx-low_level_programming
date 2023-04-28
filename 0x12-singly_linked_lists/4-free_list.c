#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *c_node;

	while (head != NULL)
	{
		c_node = head;
		head = head->next;
		free(c_node->str);
		free(c_node);
	}
}
