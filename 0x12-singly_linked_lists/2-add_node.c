#include "lists.h"
#include <string.h>

/**
 * add_node - function that add node to the beggning
 * @head: the first node
 * @str: string(malloced string)
 * Return: return the adress of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t n;
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	n = 0;
	temp->str = strdup(str);
	while (str[n])
		n++;
	temp->len = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
