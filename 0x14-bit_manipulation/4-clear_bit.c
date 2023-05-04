#include "main.h"
/**
 * clear_bit- sets the value of a bit to 0 at a given index.
 * @n: A ptr to a bit
 * @index: the index to set the value starting from 0
 * Return: 1 on success or else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int size;

size = (sizeof(unsigned long int) * 8);
	if (index >= size)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
