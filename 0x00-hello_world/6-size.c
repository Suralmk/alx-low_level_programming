#include <stdio.h>
/**
 * main - A program to  print the size of types in diffrent computer.
 * Return: 0 (success)
 */
int main(void)
{
int iType;
float fType;
long int liType;
char cType;
long long int lType;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(cType));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(iType));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(liType));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lType));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(fType));
return (0);
}
