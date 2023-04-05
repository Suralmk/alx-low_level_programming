#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back;
	listint_t *next;

next = NULL;
back = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}

	*head = back;

	return (*head);
}
