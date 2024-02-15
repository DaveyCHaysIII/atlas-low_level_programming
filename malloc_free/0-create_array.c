#include "main.h"
#include <stdlib.h>

/**
 * create_array()- create a char array of size size
 * @size: size of the array
 * @c: the character to fill the array with
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		unsigned int i;
		char *arr;

		arr = malloc(sizeof(char) * (size));

		if (arr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		arr[i] = '\0';
		return (arr);
	}
}

