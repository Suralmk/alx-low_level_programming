#include "hash_tables.h"
/*
 * file:2-key_index.c
 * Author:Surafel Melaku
 */

/**
 * key_index - Get the index at which a key/value pair should
 *             be stored in array of a hash table.
 * @key: The key for the array index.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair 
 *          should be stored in the array of the hash table.
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int key_value;

    key_value = hash_djb2(key) % size;
	return (key_value);
}
