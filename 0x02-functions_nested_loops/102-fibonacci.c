#include <stdio.h>

/**
 * main -  Print the first 50 fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int count;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	for (count = 2; count <= 50; count++)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
	}

	return (0);
}
