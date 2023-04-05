#include "lists.h"
/**
 * add_nodeint_end - adds node to end
 * @head: pointer to the first node
 * @n: data of the list
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end_node = malloc(sizeof(listint_t));
listint_t *ptr =  *head;
if (!head)
return (NULL);

if (!end_node)
return (NULL);
end_node->n = n;
end_node->next = NULL;

if (*head == NULL)
{
*head = end_node;
return (end_node);
}
while (ptr->next)
{
ptr = ptr->next;
}
ptr->next = end_node;
return (end_node);
}
