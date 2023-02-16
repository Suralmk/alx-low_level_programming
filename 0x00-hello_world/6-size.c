#include <stdio.h>
/**
 * main - A program to  print the size of types in diffrent computer.
 * Return: 0 (success)
 */
int main(void)
{
int intType;
float floatType;
long int longintType;
char charType;
long long int longlongintType;
printf("Size of a char: %zu bytes\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(longintType));
printf("Size of a long long int: %zu byte\n", sizeof(longlongintType));
printf("size of a float: %zu byte\n", sizeof(floatType));
return (0);
}
