#include <stdlib.h>

/**
 * print_name - function that prints name
 * @f: pointer to the function used as a aparameter
 * @name: the name parameter
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
	return;
f(name);
}
