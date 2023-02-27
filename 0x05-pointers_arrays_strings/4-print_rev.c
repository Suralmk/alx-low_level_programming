#include "main.h"
/**
 * print_rev - -function reverse a string and print a new line 
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		s++;
		num++;
	}

	while (num > 0)
	{
		s--;
		_putchar(*s);
		num--;
	}
_putchar('\n');
}
