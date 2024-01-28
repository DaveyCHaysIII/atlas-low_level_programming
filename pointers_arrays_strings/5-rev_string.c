#include "main.h"

/**
 * rev_string()- reverses a string
 * @s: the string in question
 *
 * Return: no return
 */

void rev_string(char *s)
{
int i, j;
char temp;

i = 0;
j = 0;
while (s[i] != '\0')
{
i++;
}
i--;

while (i > j)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
i--;
j++;
}
}
