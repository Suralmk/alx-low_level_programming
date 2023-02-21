#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function to print numbers to 98
 *
 * @a: print  starting from this number
 */
void print_to_98(int a)
{
	int i, j;

	if (a < 98)
	{
		for (i = a; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			}
		}
	else if (a > 98)
	{
		for (j = a; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
			}
		}
	printf("\n");
	}
