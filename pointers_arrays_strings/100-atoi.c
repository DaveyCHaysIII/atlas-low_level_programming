#include "main.h"
#include <ctype.h>

/**
 * _atoi()- converts a string to an int!
 * @s: the string in question
 *
 * Return: return the converted int
 */

int _atoi(char *s)
{
int i, sign, result;

result = 0;
sign = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
{
sign--;
}
else if (s[i] == '+')
{
sign++;
}
if (isdigit(s[i]))
{
result = result * 10 + (s[i] - '0');
if (!isdigit(s[(i + 1)]))
{
if (sign < 0)
{
return (result * -1);
}
else
{
return (result);
}
}
}
}
return (result);
}

