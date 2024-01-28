#include "main.h"

/**
 * rev_string()- reverses a string
 * @s: the string in question
 *
 * Return: no return
 */

void rev_string(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
int len;

len = i;
char s2[len];

while (i >= 0)
s2[i] = s[i];
i--;
}

while (len >= 0)
}
s[i] = s2[len];
i++;
len--;
}
