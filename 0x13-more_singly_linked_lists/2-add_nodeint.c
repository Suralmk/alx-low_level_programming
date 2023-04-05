#include "lists.h"
/**
 * add_nodeint - function that adds node at the begggning of the
 * list
 * @head: a pointer to another pointer that points
 * to the first node  of the list
 * @n: total number of lists
 *
 * Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
