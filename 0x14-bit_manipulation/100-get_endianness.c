#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: int
 */
int get_endianness(void)
{
	int n;
	char *end;

	n = 1;
	end = (char *)&n;

	if (*end == 1)
		return (1);

	return (0);
}
