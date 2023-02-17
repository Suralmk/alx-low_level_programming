#include <stdio.h>
/**
 * main -  a program to list all number from 0 to 9
 *
 * Return: always return 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
