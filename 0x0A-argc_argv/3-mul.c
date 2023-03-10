#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the multiplication of two numbers
 * @argc: The number of arguments , only two arguments allowed
 * @argv: An array of pointers to the arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;


	printf("%d\n", mul);

	return (0);
}
