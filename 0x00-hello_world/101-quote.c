#include <stdio.h>

/**
 * this_is_good_one_akx_team - function to use putchar
 * @alx: parameter of the function
 *
 * Description: this function is to print the statment without using
 * printf na puts function.by using putchar  and putting all
 * the elements of the alx array in a while loop is a way to print.
 * the while loop terminates when the new line charachter is faced.
 */

void this_is_good_one_alx_team(char *alx)
{
int i = 0;
while (alx[i] != '\n')
{
putchar(alx[i]);
i++;
}
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
char alx[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
this_is_good_one_alx_team(alx);
return (0);
}
