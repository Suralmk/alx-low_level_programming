#include "main.h"


/**
 * binary_to_uint - converts a binary number to an unsigned int number
 * @b: pointing to a string of chars
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, m = 1;
	unsigned int unsignednum = 0;

	if (b == NULL)
		return (0);

	for (; *(b + i); i++)
	{
		if (*(b + i) && *(b + i) != '1')
			return (0);
	}

	--i;

	for (; i >= 0; --i)
	{
		unsignednum += (*(b + i) - '0') * m;
		m *= 2;
	}

	return (unsignednum);
}
