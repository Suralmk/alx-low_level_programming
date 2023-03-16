#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first parameter
 * @s2: the second string
 * @n: the no of bytes from the second parameter
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int n1, n2;
	char *str;
	int i, j;

	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	str = (char *)malloc((n1 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < n1 ; i++)
	{
		str[i] = s1[i];
	}
	str = (char *)realloc(str, ((n1 + n2 + 1) * sizeof(char)));
	if  (str == NULL)
		return (NULL);
	for (j = 0; j < n2; j++)
	{
		str[n1 + j] = s2[j];
	}

	str[n1 + n] = '\0';

	return (str);
}
