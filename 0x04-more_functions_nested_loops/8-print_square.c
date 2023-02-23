#include "main.h"
/**
 * print_square - function that prints square
 * @n: parameter or size of the square
 * Return: void
 */
void print_square(int n)
{
	int i, j;
if (n <= 0)
{
	_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
	if (n > 0)
	{
		_putchar('#');
	}
	else
		break;
}
_putchar('\n');
}
}
}
