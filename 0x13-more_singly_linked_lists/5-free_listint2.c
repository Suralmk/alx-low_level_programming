#include "lists.h"
/**
 * free_listint2 - free listint_t and set head to null
 * @head: pointer to the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (!head)
	return;
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
