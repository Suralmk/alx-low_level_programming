#include "main.h"
#include <stdio.h>
/**
 * sum - compute the sum of multiples of 3 and 5
 * below 1024*
 */
void sum(void)
{
	int sum3 = 0;

	int sum5 = 0;

	int tsum, n;

for (n = 3; n < 10; n++)
{
if (n % 3 == 0)
{
sum3 += n;
}
if (n % 5 == 0)
{
sum5 += n;
}
	}
tsum = sum3 + sum5;
printf("%d\n", tsum);
}
