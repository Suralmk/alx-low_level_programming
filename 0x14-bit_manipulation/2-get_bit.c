#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: bit
 * @index: index is the index, starting from 0 of the bit you want to get
 *
 * Return: -1 if it fail else the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int size;

size = (sizeof(unsigned long int) * 8);
if (index >= size)
return (-1);

if ((n & (1 << index)) == 0)
return (0);

return (1);
}
