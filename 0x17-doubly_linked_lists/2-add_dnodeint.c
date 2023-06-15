#include "lists.h"

/**
 * add_dnodeint - Add node at the beggining of a
 * Double linked list
 *
 * @head: head
 * @n: value of the element to be added to the list
 * Return: the address of the new_node element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	h = *head;

	if (h)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_node->next = h;

	if (h)
		h->prev = new_node;

	*head = new_node;

	return (new_node);
}
