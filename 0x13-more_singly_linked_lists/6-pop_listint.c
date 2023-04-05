#include "lists.h"
/**
 * pop_listint - delets the node and return the data
 * @head: pointer to the first node
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr = *head;

	if (!*head || !head)
	{
		return (0);
	}

		data = (*head)->n;
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	return (data);
}
