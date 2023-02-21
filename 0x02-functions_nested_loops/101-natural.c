#include "main.h"
#include <stdio.h>
/**
 * 
 * sum - compute the sum of multiples of 3 and 5
 * below 1024*
 */
void sum(void)
{
unsigned long int sum3 = 0;

unsigned long int sum5 = 0;

unsigned long int tsum = 0;

int n;

for (n = 3; n < 1024; ++n)
{
if ((n % 3) == 0)
{
sum3 += n;
}
else if ((n % 5) == 0)
{
sum5 += n;
}
	}
tsum = sum3 + sum5;
printf("%lu\n", tsum);
}
/**
 * main - print the sum of the numbers
 * Return: always 0
 */
int main(void)
{
	sum();
	return (0);
}
