#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: the second number
 * Return: returns the number of bits you would need
 * to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int round = (sizeof(n) * 8);
int flip;

for (flip = 0; round--; flip += (n >> round & 1) != (m >> round & 1))
	;
return (flip);
}
