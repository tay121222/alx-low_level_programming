#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to pointer to the head of list
 * @n: value to set as data for new_node
 *
 * Return: Null if fail or pointer to new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp_node = *head;
		while (temp_node->next != NULL)
			temp_node = temp_node->next;
		temp_node->next = new_node;
	}
	return (new_node);
}
