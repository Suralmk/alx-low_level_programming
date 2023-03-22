#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integder
 * @array: pointer t0 the array rhat contain elemets
 * @size: size of array
 * @cmp: pointer to other functions
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

if ((array == NULL) || (!cmp) || (size < 0))
return (-1);
	for (i = 0; (i < size); i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		continue;
	}
return (i);
}
