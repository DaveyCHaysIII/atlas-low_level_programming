#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat()- concats strings
 * @s1: the string in question
 * @s2: the string in question
 * @n: the number of bytes
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, size;

	size = strlen(s1) + n + 1;
	str = malloc(size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && (j + i) < size; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
