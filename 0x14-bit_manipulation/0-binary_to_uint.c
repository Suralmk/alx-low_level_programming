#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int number
 * @b: pointing to a string of chars
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int number = 0;
unsigned int n = 1;
int len = 0;

if (!b)
return (0);

	while (b[len])
	{
	len++;
	}
len -= 1;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		number += (b[len] - '0') * n;
		n *= 2;
len--;
	}

	return (number);
}
