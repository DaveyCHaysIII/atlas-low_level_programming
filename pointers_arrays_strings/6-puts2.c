#include "main.h"

/**
 * puts2()- prints every other chararcter of a string
 * @str: the string in question
 *
 * Return: no return
 */

void puts2(char *str)
{
int i, j;

while (str[i] != '\0')
{
i++;
}
j = i / 2;
i = 0;

while (j > 0)
{
_putchar(str[i]);
j--;
i = i + 2;
}

}
