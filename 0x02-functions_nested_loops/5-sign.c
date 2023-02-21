#include "main.h"
/**
 * print_sign - a function that return sign of a number
 *
 * @n: parameter of the function
 * Return: int
 */
int print_sign(int n)
{
if (n<0){
_putchar ('-');
return (-1);
}
else if (n == 0){
_putchar('0');
return (0);
}
_putchar('+');
return (n>0);
}
