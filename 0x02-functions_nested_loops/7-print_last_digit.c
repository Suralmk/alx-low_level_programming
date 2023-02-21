#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: parameter of the function
 * Return: int
 */
int print_last_digit(int a)
{
int last_digit;

	if (a >= 0)
	{
		last_digit = a % 10;
	}
	else
	{
		last_digit = -(a % 10);
	}
		_putchar(last_digit + '0');
	return (last_digit);
}
