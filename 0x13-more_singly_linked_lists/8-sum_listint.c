#include "lists.h"
/**
 * sum_listint - return the sum of the data of the bodes
 * @head: pointer to the node
 * Return: the sum of the datas, else 0 if the
 * list is empty
 */
int sum_listint(listint_t *head)
{
	int sum, num, i;

	num = head->n;
	sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		num = head->n;
		sum = sum + num;
		head = head->next;
		i++;
	}
	return (sum);
}
