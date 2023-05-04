#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to head of linkedlist
 *
 * Return: address of node or NULL if loop not found
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s_node, *f_node;

	if (head == NULL)
		return (NULL);

	s_node = head;
	f_node = head;

	while (f_node && f_node->next)
	{
		s_node = s_node->next;
		f_node = f_node->next->next;

		if (s_node == f_node)
		{
			s_node = head;

			while (s_node != f_node)
			{
				s_node = s_node->next;
				f_node = f_node->next;
			}

			return (s_node);
		}
	}

	return (NULL);
}
