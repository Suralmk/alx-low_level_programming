#include <stdio.h>
/**
 * main - lists alphabet letters in lower case
 * Return: Always return 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
	putchar(alphabet);
}
	putchar('\n');
	return (0);
}
