#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to pointer to head of the list
 * @n: value to set as data for new node
 *
 * Return: Null if it's fails or address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
