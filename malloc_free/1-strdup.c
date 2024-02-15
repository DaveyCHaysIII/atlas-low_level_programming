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

	char *arr;

	arr = malloc(sizeof(str));	
}
