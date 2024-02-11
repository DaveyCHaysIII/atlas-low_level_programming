#include "main.h"

/**
 * _strcpy()- copies a string
 * @dest: the destination
 * @src: the string in question
 *
 * Return: returns pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i, j;

i = 0;
while (src[i] != '\0')
{
i++;
}

j = 0;
while (j <= i)
{
dest[j] = src[j];
j++;
}
return (dest);
}
