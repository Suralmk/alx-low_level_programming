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
	char *cloned_value;
	unsigned long int idx, i;

	if (ht == NULL) || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cloned_value = strdup(value);
	if (cloned_value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	while (ht->array[i] != '\0')
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cloned_value;
			return (1);
		}
		i++;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(cloned_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = cloned_value;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
