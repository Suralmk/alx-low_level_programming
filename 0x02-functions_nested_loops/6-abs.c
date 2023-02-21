#include "main.h"
/**
 * _abs - computes the absolute value of a number
 * @a: parameter of the function
 * Return: int
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = (a * -1);
	}
	else if (a == 0)
	{
		a = 0;
	}
	else
	{
		a = (1 * a);
	}
	return (a);
}
