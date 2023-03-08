#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to the string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}
