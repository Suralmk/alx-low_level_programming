#include "main.h"
/**
 * _strchr - return first occurance of a charachter
 * @s: return this pointer
 * @c: check the existance of this charachter
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

while (s[i] != '\0')
{
if (s[i] == c)
return (s);
else if (s[i + 1] == c)
return (s + 1);
s++;
}
return (s + 1);
}
