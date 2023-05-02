#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data
 * @head: Pointer to the head
 *
 * Return: The sum of all the data in the linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *list_list = head;
	int sum = 0;

	if (list_list == NULL)
		return (0);

	while (list_list)
	{
		sum += list_list->n;
		list_list = list_list->next;
	}

	return (sum);
}
