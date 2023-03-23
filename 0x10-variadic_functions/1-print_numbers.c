#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator:separator for the numbers
 * @n:total number of numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;

	va_start(vl, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(vl, int));

		if (i != (n - 1) && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(vl);
}
