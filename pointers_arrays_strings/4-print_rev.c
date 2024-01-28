#include "main.h"

/**
 * print_rev()- prints a string in reverse
 * @s: the string in question
 *
 * Return: no return
 */

void print_rev(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
for (i >= 0; i--;)
{
_putchar(s[i]);
}
_putchar('\n');
}
