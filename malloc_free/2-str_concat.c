#include "main.h"
#include <stdlib.h>

/**
 * str_concat()- concatenates!
 * @s1: string 1!
 * @s2: string 2!
 *
 * Return: pointer to concatenated string!
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < len1; k++)
	{
		concat[k] = s1[k];
	}
	for (l = 0; l < len2; l++)
	{
		concat[k] = s2[l];
		k++;
	}
	concat[k] = '\0';

	return (concat);
}

/**
 * _strlen()- gives length of string
 * @str: string in question
 *
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
