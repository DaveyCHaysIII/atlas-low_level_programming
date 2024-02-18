#include "main.h"
#include <stdlib.h>

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
	unsigned int *str, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str = malloc(sizeof(s1 + n));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < (i + n); j++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
