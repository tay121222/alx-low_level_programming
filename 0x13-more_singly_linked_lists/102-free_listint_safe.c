#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to a pointer to the head of linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listp_t *hptr = NULL, *new, *add;
	listint_t *node;

	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
		{
			exit(98);
		}
		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;
		add = hptr;

		while (add->next)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp(&hptr);
				return (count);
			}
		}

		node = *h;
		*h = (*h)->next;
		free(node);
		count++;
	}

	*h = NULL;
	free_listp(&hptr);
	return (count);
}
