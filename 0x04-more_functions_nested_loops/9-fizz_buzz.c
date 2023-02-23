#include <stdio.h>
/**
 * main - function that prints fizz for the multiple of 3 and buzz for 5
 * and fizzbuzz for the multiple of 5 an d 3
 * Return: 0
 */
int main(void)
{
int i;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("%s ", fb);
}
else if (i % 3 == 0)
{
printf("%s ", f);
}
else if (i % 5 == 0)
{
printf("%s ", b);
}
else
printf("%d ", i);
}
putchar('\n');
return (0);
}
