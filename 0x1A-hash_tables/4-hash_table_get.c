#include "hash_tables.h"
/*
* file: 4-hash_table_get.c
* Author: Surafel Melaku
*/
/**
 * hash_table_get - return back the value of a the crossponding
 * specific key
 * @ht: pointer to the hash table where the value is get
 * @key: the crospoinding specific key
 *
 * Return: the value, if the specified key not found NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *key_node;
	unsigned long int idx;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	if (*key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	key_node = ht->array[idx];
	for ( ; key_node && strcmp(key_node->key, key) != 0; )
		key_node = key_node->next;

	return ((key_node == NULL) ? NULL : key_node->value);
}
