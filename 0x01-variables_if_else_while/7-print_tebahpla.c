#include <stdio.h>
/**
 * main - program that lists all letter of alphabet in reverse
 *
 * Return: Always return 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
