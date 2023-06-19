#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: parameter 1
 * @accept: parameter 2
 * Return: unsignet int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int x = 0;

while (s[i] != '\0')
{
int j = 0;

while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
x++;
break;
}
j++;
}
if (accept[j] == '\0')
{
break;
}
i++;
}
return (x);
}
