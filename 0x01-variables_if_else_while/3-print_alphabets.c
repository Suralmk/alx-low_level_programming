#include <stdio.h>
/**
 * main - lists alphabet letters in lower case and in uppercase
 * Return: Always return 0
 */

int main(void)
{
	char alphabet;
	char upperalphabet;
	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
			{
				putchar(alphabet);
			}
		for (upperalphabet = 'A'; upperalphabet <= 'Z' ; upperalphabet++)
			{
				putchar(upperalphabet);
			}
		putchar('\n');
		return (0);
}
