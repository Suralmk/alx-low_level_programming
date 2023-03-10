#include <stdio.h>
/**
 * main - Prints the addition of positive numbers
 * @argc: The number of arguments or the number of number to be added
 * @argv: An array of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);

	}

	printf("%d\n", sum);

	return (0);
}
