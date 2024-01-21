#include "main.h"

/**
 * times_table - prints the times table 0 - 9
 *
 */

void times_table(void)
{
int i;
for (i = 0; i < 10; i++)
{
printf("0, ");
int j, sum, sum1, sum2;
for (j = 1; j < 10; j++)
{
sum =(i * j);
sum1 =(sum/10);
sum2 =(sum % 10);
if (sum1 == 0)
{
putchar(' ');
putchar(sum2 + '0');
}
else
{
putchar(sum1 + '0');
putchar(sum2 + '0');
}
if(j != 9)
{
putchar(',');
}
}
putchar('\n');
}
}
