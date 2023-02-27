#include "main.h"
/**
 * puts2 - function that prints every other charachter of a string
 * @a: string
 * Return: void
 */
void puts2(char *a)
{
		int i = 0;
		int num = 0;

	while (a[num] != '\0')
	{
		num++;
	}
while (i < num)
{
_putchar(a[i]);
i += 2;
}
_putchar('\n');
}
