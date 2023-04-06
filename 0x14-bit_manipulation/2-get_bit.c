#include "main.h"

/**
 * get_bit - return value of a bit at a given index
 * @n: number to search 
 * @index: index of the bit starting from 0
 *
 * Return: value of the bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
int value;

if (index > 63)
return (-1);

value = (n >> index) & 1;
return (value);
}
