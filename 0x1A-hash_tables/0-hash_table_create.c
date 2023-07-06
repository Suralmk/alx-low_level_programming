#include "hash_tables.h"
/**
 * hash_table_create - Function that create a hash table
 * @size: The size of the array.
 *
 * Return: retturn null if any error happen. on success return
 * pointer to the hast table
 */
hash_table_t *hash_table_create(unsigned long int size)
{

hash_table_t *table;
unsigned long int idx = 0;

table = malloc(sizeof(hash_node_t));

if (!table)
{
return (NULL);
}
table->size = size;
table->array = malloc(sizeof(hash_node_t) * size);

if (table->array == NULL)
{
return (NULL);
}

while (idx < size)
{
table->array[idx] = NULL;

idx++;
}
return (table);
}
