#include "main.h"

/**
 * _strncpy()- copies a string
 * @dest: the destination
 * @src: the source
 * @n: the number of characters to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
