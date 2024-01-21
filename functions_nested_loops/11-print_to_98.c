#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all numbers from n to 98
 * @n: the number away from 98
 *
 */

void print_to_98(int n)
{
if (n < 98)
{
n = 98 - n;
while (n < 99)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d", n);
}
n++;
}
}
else if (n > 98)
{
n = n - 98;
while (n > 97)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d", n);
}
n--;
}
}
else 
{
printf("98");
}
}

