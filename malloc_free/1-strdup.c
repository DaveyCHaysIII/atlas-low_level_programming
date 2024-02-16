#include "main.h"
#include <stdlib.h>

/**
 * _strdup()- does stuff
 * @str: the string in question
 *
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	unsigned int i, j;
	char *arr;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	arr = malloc(sizeof(str) * (i + 1));
	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}
	arr[i] = '\0';
	return (arr);
}
