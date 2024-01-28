#include "main.h"

/**
 * print_array()- prints a given number of integers of an array
 * @a: the array in question
 * @n: the number of integers
 *
 * Return: no return
 */

void print_array(int *a, int n)
{
int i;

if (n < 1)
{
printf(" ");
}
else
{
n--;
for (i = 0; i < n; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n]);
}
}
