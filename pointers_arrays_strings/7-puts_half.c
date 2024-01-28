#include "main.h"

/**
 * puts_half()- prints the front half of a string if even, back if odd
 * @str: the string in question
 *
 * Return: no return
 */

void puts_half(char *str)
{
int i, j;

i = 0;
while (str[i] != '0')
{
i++;
}
j = i / 2;
if (i % 2)
{
for (i = i; i >= j; i--)
{
_putchar(str[i];
}
}
else
{
for (i = 0; i <= j, i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
