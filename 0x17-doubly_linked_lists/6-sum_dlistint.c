#include "lists.h"

/**
 * sum_dlistint - function that return the sum of all
 * elements in a double linked list
 *
 * @head: head
 * Return: sum of the elemnts
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_elements = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;

		while (head)
		{
			sum_elements += head->n;
			head = head->next;
		}
	}

	return (sum_elements);
}
