#include "main.h"
/**
 * _pow_recursion - finds the power of a number
 * @x: the number
 * @y: the power
 * Return: int
 */
int _pow_recursion(int x, int y)
{
int result;
if (y > 0)
{
result = x * _pow_recursion(x, y - 1);
return (result);
}
else if (y < 0)
{
return (-1);
}
else
{
return (1);
}
}
