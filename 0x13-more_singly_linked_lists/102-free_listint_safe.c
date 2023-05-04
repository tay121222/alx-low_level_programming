#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

int find_in_listp(listp_t *head, const void *ptr)
{
	listp_t *node = head;

	while (node != NULL)
	{
		if (node->p == ptr)
			return (1);
		node = node->next;
	}
	return (0);
}

void free_listint(listint_t *head)
{
	listint_t *node, *next;

	node = head;
	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
}

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listp_t *hptr = NULL, *new = NULL, *add = NULL;
	listint_t *node = NULL, *next = NULL;

	if (h == NULL)
		return (0);

	node = *h;
	while (node != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
		{
			free_listp(&hptr);
			exit(98);
		}
		new->p = (void *)node;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (node == (listint_t *)add->p)
			{
				/*printf("-> [%p] %d\n", (void *)node, node->n);*/
				free_listp(&hptr);
				free_listint(*h);
				*h = NULL;
				return (count);
			}
		}

		/*printf("[%p] %d\n", (void *)node, node->n);*/
		next = node->next;
		free(node);
		node = next;
		count++;
	}

	free_listp(&hptr);
	*h = NULL;
	return (count);
}
