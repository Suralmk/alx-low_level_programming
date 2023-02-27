#include "main.h"
/**
 * swap_int - swap the value of two intigers
 * @a: the first intiger
 * @b: the second intiger
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
