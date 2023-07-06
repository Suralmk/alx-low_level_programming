#include "hash_tables.h"
/*
* File: 5-hash_table_print.c
* Author: Surafel Melaku
*/

/**
 * hash_table_print - print the content of the hash table
 * @ht: hash table pointer
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned long int i = 0;
	unsigned char counter = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (counter == 1)
				printf(", ");

			new_node = ht->array[i];
			while (new_node != NULL)
			{
				printf("'%s': '%s'", new_node->key, new_node->value);
				new_node = new_node->next;
				if (new_node != NULL)
					printf(", ");
			}
			counter = 1;
		}
		i++;
	}
	printf("}\n");
}
