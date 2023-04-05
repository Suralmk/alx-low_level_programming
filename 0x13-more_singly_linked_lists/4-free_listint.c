#include "lists.h"
/**
 * free_listint - function that free listint_t
 * @head: pointer to the first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (!head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
