#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: pointer to the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number;
	long int x;

number = 0;

	while (head)
	{
		x = head - head->next;
		number++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (!(x <= 0))
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (number);
}
