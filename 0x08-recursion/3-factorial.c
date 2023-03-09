#include "main.h"
/**
 * factorial - return factorial of a number
 * @n: number
 * Return: int
 */

int factorial(int n)
{
if (n >= 1)
{
int result = n * factorial((n - 1));
return (result);
}
else if (n < 0)
{
return (-1);
}
return (1);
}
