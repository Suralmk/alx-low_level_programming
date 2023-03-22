#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - dunction to iterate in array
 * @array: pointer to array that contain the elements
 * @size: array size
 * @action: pointer t the functions
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
