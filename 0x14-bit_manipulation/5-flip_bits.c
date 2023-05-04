#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: before flip
 * @m: the number to be fliped
 * Return: no of bits to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result;
unsigned long int i = 0;

result = n ^ m;
while (result > 0)
{
i += (result & 1);
result >>= 1;
}
return (i);
}
