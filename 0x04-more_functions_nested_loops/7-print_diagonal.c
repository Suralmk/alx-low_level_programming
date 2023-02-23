#include "main.h"
/**
 * print_linr - prints a line to n
 * @n: the line is printed to numbe n
 */
void print_diagonal(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i == j)
_putchar ('\\');
else if (j < i)
_putchar(' ');
}
_putchar('\n');
}
}
