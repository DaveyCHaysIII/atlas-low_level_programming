#include "main.h"

/**
 * times_tables - prints the times table 0 - 9
 *
 */

void times_tables(void)
{
int i;
for (i = 0; i < 10; i++)
{
int j, sum, sum1, sum2;
for (j = 0; j < 10; j++)
{
sum =(i * j);
sum1 =(sum/10);
sum2 =(sum % 10);
if (sum1 == 0)
{
_putchar(sum2 + '10');
_putchar(' ');
}
else
{
_putchar(sum1 + '0');
_putchar(sum2 + '0');
}
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
