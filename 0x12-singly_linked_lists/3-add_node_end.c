#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - functions calculate length of string
 * @str: string to calculate length
 *
 * Return: length of string
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: pointer to head
 * @str: string to be added to node
 *
 * Return: Null if fails or address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *c_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	c_node = *head;

	while (c_node->next != NULL)
		c_node = c_node->next;

	c_node->next = new_node;

	return (new_node);
}
