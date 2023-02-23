#include "main.h"
/**
 * _isdigit - returns 1 if digit ,  else return 0
 * @c: parameter of the function
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
		else
		return (0);
}
