#include "main.h"

/**
 * _memset()- sets memory
 * @s: string in question
 * @b: a character
 * @n: an unsigned int
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}
