#include "main.h"
/**
 * _memset - fills memory with contant byte
 * @s: pointer to the char
 * @b: new charachter
 * @n: fill to n
 * Return: char s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return s;
}
