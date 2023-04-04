#include "lists.h"
/** 
 * listint_len - returns the number of elements
 * int he linked list
 *
 * @h: pointer that points to the list of the structure
 * Return: unsigned long
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
