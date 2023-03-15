#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that allocates a memory for a charachter
 * @str: charachter parameter
 * Return: char
 */

char *_strdup(char *str)
{
	int i, n;
	char *newspace;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	newspace = (char *)malloc(i * sizeof(char) + 1);

	if (newspace == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < i; n++)
	{
		newspace[n] = str[n];
	}
	newspace[n] = '\0';

	return (newspace);
}
