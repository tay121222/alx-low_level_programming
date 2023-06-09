#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to head
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *list_head = h;

	size_t count = 0;

	while (list_head != NULL)
	{
		if (list_head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", list_head->len, list_head->str);
		count++;
		list_head = list_head->next;
	}

	return (count);
}
