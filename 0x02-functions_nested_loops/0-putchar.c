#include <stdio.h>
#include <string.h>
/**
 * main - function that prints _putchar
 *
 * Return: always return 0
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
int main(void)
{
	_putcha();
	putchar('\n');
	return (0);
}
