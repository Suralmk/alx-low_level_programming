#include "main.h"
/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: a pointer to a bit
 * @index: the index, starting from 0 of the bit
 * Return: returns 1 on success else -1
 */
int get_bit(unsigned long int *n, unsigned int index)
{
unsigned int n;

n = (sizeof(unsigned long int) * 8);
	if (index >= n)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
