#include "hash_tables.h"
/*
 * File: 3-hash_table_set.c
 * Auth: Surafel Melaku
*/

/**
 * hash_table_set - add a new_node node to the hash table
 * @ht: pointer to the table
 * @key: key, can not be empty
 * @value: the value crossponding to each key
 *
 * Return: on failure - 0, and on success 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *cloned;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cloned = strdup(value);
	if (cloned == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cloned;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(cloned);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = cloned;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
