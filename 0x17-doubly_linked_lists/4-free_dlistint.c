#include "lists.h"

/**
 * free_dlistint - function that free the space occupied
 * by the linked list dlistint_t
 *
 * @head: head of dlistint_t
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
		while (head->prev)
			head = head->prev;

	while ((temp = head))
	{
		head = head->next;
		free(temp);
	}
}
