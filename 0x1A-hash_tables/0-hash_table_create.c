#include "hash_tables.h"
/*
* File: 0-hash_table_create.c
* Author: Surafel Melaku
*/

/**
 * hash_table_create - This function creates a hash table
 * @size: the size of the hash table's array
 *
 * Return: NULL if error happnes, else returns the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int idx = 0;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);

	while (idx < size)
	{
		table->array[idx] = NULL;
		idx++;
	}

	return (table);
}
