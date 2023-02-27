#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print array
 * @a: array to be printed
 * @n: print n elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (a[n + 1] == '\0')
		putchar('\n');
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%i", a[i]);
		}
		else
		{
		printf("%i, ", a[i]);
		}
	}
	putchar('\n');
}
