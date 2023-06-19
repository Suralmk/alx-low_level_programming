#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: string to be counted
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
