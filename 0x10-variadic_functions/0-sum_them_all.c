#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - variadic function for addition
 * @n: total number of numbers to added
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	int sum;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(vl, n);
	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(vl, int);
		i++;
	}
	va_end(vl);
	return (sum);
}
