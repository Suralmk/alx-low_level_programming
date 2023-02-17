#include <stdio.h>
/**
 * main - lists alphabet letters in lower case and in uppercase
 *
 * Return: Always return 0
 */

int main(void)
{
	char alphabet = 'a';

	char upperalphabet = 'A';

	while (alphabet <= 'z')
			{
				putchar(alphabet);
				alphabet++;
			}
	while (upperalphabet <= 'Z')
			{
				putchar(upperalphabet);
				upperalphabet++
			}
		putchar('\n');
		return (0);
}
