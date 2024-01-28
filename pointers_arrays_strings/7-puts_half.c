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
while (str[i] != '\0')
{
i++;
}
if (i % 2)
{
j = (i - 1) / 2;
}
else
j = i / 2;

for (j = j; j < i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
