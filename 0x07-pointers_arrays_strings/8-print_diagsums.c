#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int i, s, sizer;

	i = 0;
	s = 0;
	sizer = size * size;
	while (i < sizer)
	{
		if (i % (size + 1) == 0)
			s += a[i];
		i++;
	}
	printf("%d, ", s);

	m = 0;
	i = 0;
	while (i < sizer)
	{
		if (i % (size - 1) == 0 && i != (sizer - 1) && i != 0)
			s += a[i];
		i++;
	}
	printf("%d\n", s);
}
