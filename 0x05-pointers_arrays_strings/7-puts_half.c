#include "main.h"
/**
 * puts_half - print half of string
 * @s: string its half to be printed
 * Return: void
 */
void puts_half(char *s)
{
	int len = 0;
	int i = 0;
	int len2 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
	}
	else if (len % 2)
	{
		len2 = (len - 1) / 2;
		while (len2 < len - 1)
		{
		_putchar(s[len2 + 1]);
		len2++;
		}
	}
_putchar('\n');
}
