#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int.
 * @b: pointer to a string of binary number
 * Return: unsigned int else 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result;
int i;

if (b == NULL)
{
return (0);
}
result = 0;
i = 0;

while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
result = result << 1;
if (b[i] == '1')
{
result = result | 1;
}
i++;
}
return (result);
}
