#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result;
int i;

i = 0;
result = 0;

if (b == NULL)
return (0);

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
