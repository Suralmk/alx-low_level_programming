#include <stdio.h>
#include <string.h>
/**
 * _putcha - function that prints _putchar
 */
void _putcha(void)
{
	int i;

	char c[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(c[i] + 0);
	}
}
/**
 * main - entry point
 * Return: always return 0
 */
int main(void)
{
	_putcha();
	putchar('\n');
	return (0);
}
