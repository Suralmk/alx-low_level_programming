#include "main.h"
/**
 * times_table - prints the nine time table
 *
 * Return: void
 */
void times_table(void)
{
	int k, i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		k = i * j;
		if (k == 0)
		{
			_putchar(k + '0');
		}
		if (k <= 9 && k != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
		}
		else if (k > 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		}
	_putchar('\n');
	}
}
