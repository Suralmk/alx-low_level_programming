#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - variadic function that print strings
 * @separator: separates the strings
 * @n: total number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *name;
va_list vl;

va_start(vl, n);
i = 0;
while (i < n)
{
	name = va_arg(vl, char *);
	if (name[i] != '\0')
	{
		printf("%s", name);
	}
	else
		printf("nl");

	if (i != (n - 1) && separator)
		printf("%s", separator);
	i++;
}
printf("\n");
va_end(vl);
}
