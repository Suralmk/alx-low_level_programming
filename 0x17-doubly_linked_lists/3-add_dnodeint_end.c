#include "lists.h"

/**
 * add_dnodeint_end - Add a new_node node at the end of
 * double liked list
 *
 * @head: head
 * @n: value of the element to be added
 * Return: the adress to the new_node node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	h = *head;

	if (h)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = h;

	return (new_node);
}
