#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given index
 *
 * @h: head
 * @idx: index where it is inserted
 * @n: the new node value
 * Return: Adress of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *head;
	unsigned int num;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head = *h;
		num = 1;
		if (head)
			while (head->prev)
				head = head->prev;
		while (head)
		{
			if (num == idx)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;
			}
			head = head->next;
			num++;
		}
	}

	return (new_node);
}
