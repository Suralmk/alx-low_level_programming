#include "lists.h"
/**
 * get_nodeint_at_index - return nth node of the list
 * @head: pointer to the list
 * @index: index of the list
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index_num;

	if (head)
{
	for (index_num = 0; head; index_num++)
	{
		if (index_num == index)
			return (head);
		head = head->next;
	}
}
	return (NULL);
}
