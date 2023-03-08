#include "main.h"
/**
 * is_prime_number - functionto decide prime and even number
 * @n: number to be evaluated
 * Return: int
 */

int is_prime_number(int n)
{
if (n > 1)
{
if (n % 2 == 1)
{
return (1);
}
else if (n % 2 == 0)
{
return (0);
}
}
return (0);
}
