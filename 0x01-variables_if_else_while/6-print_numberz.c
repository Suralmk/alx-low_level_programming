#include <stdio.h>
/**
 * main - printing 0-10 using putchar
 *
 * Return: always returns 0
 */
int main(void)
{
	int b;

	b = 0;
	while (b < 10)
	{
		putchar(b + '0');
		b++;
	}
	putchar('\n');
	return (0);
}
