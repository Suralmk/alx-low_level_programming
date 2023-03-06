#include "main.h"
/**
 * _memcpy - copy a  src to dest
 * @src: to be copied
 * @dest: where it is cpoied
 * @n: copy to n
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
