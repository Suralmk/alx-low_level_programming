#include "lists.h"

/**
 * dlistint_len - Function  that return the number of elements
 * in double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (!h)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
