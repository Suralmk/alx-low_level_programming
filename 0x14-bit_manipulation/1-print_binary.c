#include "main.h"

/**
 * print_binary - prints the binary equal to the decila number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
int a, num = 0;
unsigned long int current;
a = 63;
while (a >= 0)
{
current = n >> a;
if (current & 1)
{
_putchar('1');
num++;
}
else if (num)
_putchar('0');
a--;
}
if (!num)
_putchar('0');
}
