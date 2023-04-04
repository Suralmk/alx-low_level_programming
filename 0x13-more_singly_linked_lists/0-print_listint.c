#include "lists.h"
/**
 * print_listint - function that prints the number of elements in
 * the structure list
 * @h: pointer to the structure list
 * Return: unsigned in
 */
size_t print_listint(const listint_t *h)
{
size_t i;

i = 0;
while (h)
{
	printf("%i\n", h->n);
	h = h->next;
	i++;
}
return (i);
}
