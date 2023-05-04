#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listp - frees a linked list
 * @head: head of a list
 * Return: no return
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *c_node;

	if (head != NULL)
	{
		c_node = *head;
		while ((temp = c_node) != NULL)
		{
			c_node = c_node->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - function that prints a linked list
 * @head: a pointer to the head
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *c_node = head;
	listp_t *hptr = NULL, *new, *add;

	while (c_node != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
		{
			exit(98);
		}
		new->p = (void *)c_node;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (c_node == add->p)
			{
				printf("-> [%p] %d\n", (void *)c_node, c_node->n);
				free_listp(&hptr);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)c_node, c_node->n);
		c_node = c_node->next;
		count++;
	}

	free_listp(&hptr);

	return (count);
}
