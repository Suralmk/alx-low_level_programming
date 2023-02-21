#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued termse
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;

	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	while (i <= 33)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
		++i
	}
	printf("%lu\n", sum);
	return (0);
}
