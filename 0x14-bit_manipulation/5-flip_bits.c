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
	unsigned long int out;
	unsigned int i;

	out = n ^ m;
	for (i = 0; out != 0; ;)
	{
		if ((out & 1) == 1)
			i++;
		out = out >> 1;
	}
	return (i);
}
