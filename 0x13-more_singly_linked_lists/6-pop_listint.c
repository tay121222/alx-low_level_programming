#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node
 * @head: pointer to pointer to head node
 *
 * Return: returns the head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int head_node_data;

	if (*head == NULL)
	{
		return (0);
	}

	temp_node = *head;
	*head = (*head)->next;
	head_node_data = temp_node->n;
	free(temp_node);

	return (head_node_data);
}
