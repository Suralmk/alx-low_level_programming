#include "lists.h"

/**
 * get_dnodeint_at_index - return a node at a specific
 * index
 *
 * @head: head
 * @index: index of the node to be returned
 * Return: the nth
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;

	if (!head)
		return (NULL);

	while (head->prev)
		head = head->prev;

	idx = 0;

	while (head)
	{
		if (idx == index)
			break;
		head = head->next;
		idx++;
	}

	return (head);
}
