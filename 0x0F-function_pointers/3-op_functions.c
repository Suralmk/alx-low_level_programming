#include "3-calc.h"
/**
 * op_add - function to add
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to substraction
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to multplication
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_mul(int a, int b)
{
	int m;

	m = a * b;
	return (m);
}
/**
 * op_div - function to division
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function to modules
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
