#incude "main.h"
/**
 * print_times_table - printing times of any n size table
 * @n: size of the table
 */
void print_times_table(int n)
{
int x, y, z;

	if (n > 15 || n < 0)
		return;
	for  (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (z > 99)
			{
				putchar(z / 100 + '0');
				putchar((z / 10 % 10) + '0');
				putchar(z % 10 + '0');
			}
			else if (z > 9)
			{
				putchar(' ');
				putchar(z / 10 + '0');
				putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				putchar(' ');
				putchar(' ');
				putchar(z + '0');
			}
			else
				putchar(z + '0');
			if (y != n)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
