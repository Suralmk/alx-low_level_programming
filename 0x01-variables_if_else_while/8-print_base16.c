#include <stdio.h>
/**
 * main - printing the hexadecimal
 *
 * Return:Always return 0
 */
int main(void)
{
	int n = 0;

	char l = 'a';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
