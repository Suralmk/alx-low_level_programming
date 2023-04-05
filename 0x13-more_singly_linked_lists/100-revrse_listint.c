#include "lists.h"

/**
 * reverse_listint - reverses the nodes a linked list
 * @head: pointer to the list
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *back = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = back;
back = *head;
*head = next;
}
*head = back;
return (*head);
}
