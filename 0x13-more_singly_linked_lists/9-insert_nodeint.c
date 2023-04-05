#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at any index
 * @head: poointer to the node
 * @idx: index where it inserted
 * @n: the data to be inserted
 *
 * Return: pointer to the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *ptr = *head;
	unsigned int i = 0;

new->n = n;
if (!new)
return (NULL);
if (!*head)
return (NULL);
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
while (ptr && (i < idx))
{
	if (i == idx - 1)
	{
		new->next = ptr->next;
		ptr->next = new;
		return (new);
	}
	else
		ptr = ptr->next;
	i++;
}
return (NULL);
}
