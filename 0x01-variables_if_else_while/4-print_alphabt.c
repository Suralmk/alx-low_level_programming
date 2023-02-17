#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		if ((p != 'q' && p != 'e') && p <= 'z')
		putchar (p);
		p++;
	}
	putchar ('\n');
	return (0);
}
