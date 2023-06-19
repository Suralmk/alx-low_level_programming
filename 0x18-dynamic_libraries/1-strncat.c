#include "main.h"
/**
 * _strncat - function to concatenate two strings
 * @dest: concate to this string
 * @src: a string to be concatenated to the first one (dest)
 * @n: number of charachter to be concatenated from the second string
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && n > j)
{
dest[i] = src[j];
n--;
i++;
j++;
}
dest [i] = '\0';
return (dest);
}
