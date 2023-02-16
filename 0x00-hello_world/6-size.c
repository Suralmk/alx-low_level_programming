#include <stdio.h>
/**
 * main - A program to  print the size of types in diffrent computer.
 * Return: 0 (success)
 */
int main(void)
{
long long int a;
printf("Size of a char: %li byte(s)\n", (long int)sizeof(char));
printf("Size of an int: %li byte(s)\n", (long int)sizeof(int));
printf("Size of a long int: %li byte(s)\n", (long int)sizeof(long int));
printf("Size of a long long int: %li byte(s)\n", (long int)sizeof(a));
printf("size of a float: %li byte(s)\n", (long int)sizeof(float));
return (0);
}
