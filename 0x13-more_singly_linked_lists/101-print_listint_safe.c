#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe -  function that prints a linked list
 * @head: a pointer to the head
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *c_node, *loop_node;

	if (head == NULL)
		exit(98);

	c_node = head;
	loop_node = head->next;

	while (loop_node != NULL && loop_node < c_node)
	{
		printf("[%p] %d\n", (void *)c_node, c_node->n);
		count++;
		c_node = c_node->next;
		loop_node = loop_node->next;

	}

	printf("[%p] %d\n", (void *)c_node, c_node->n);
	count++;

	if (loop_node != NULL)
	{
		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
		exit(98);
	}

	return (count);
}
