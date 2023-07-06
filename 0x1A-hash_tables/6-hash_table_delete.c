#include "hash_tables.h"
/*
* File: 6-hash_table_delete.c
* Author: Surafel Melaku
*/

/**
 * hash_table_delete - delete a hash table and its vales
 * @ht: A hash table pointer, points to the table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *hash_node, *ptr;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			hash_node = ht->array[i];
			while (hash_node)
			{
				ptr = hash_node->next;
				free(hash_node->key);
				free(hash_node->value);
				free(hash_node);
				hash_node = ptr;
			}
		}
		i++;
	}
	free(h->array);
	free(h);
}
