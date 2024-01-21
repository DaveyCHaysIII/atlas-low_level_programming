#include "main.h"

/**
 * print_sign- prints the sign of a given number
 * @n: the number
 *
 * Return: returns 1 if n is positive, 0 if n is zero, -1 if n is negative
 */

int print_sign(int n)
{
if (n > 0)
{
putchar("+");
return (1);
}
else if (n = 0)
{
putchar("0");
return (0);
}
else
{
putchar("-");
return (-1);
}
}
