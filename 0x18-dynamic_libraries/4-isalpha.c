#include "main.h"
/**
 * _isalpha - cheks for alphabetic letter
 *
 * @c: the parameter of the function
 * Return: int
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') ||  (c >= 'A' && c <= 'Z'));
}
