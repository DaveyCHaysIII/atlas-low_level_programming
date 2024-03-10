#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint()- converts binary to unsigned int
 * @b: the binary
 *
 * Return: the number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, num, length;

	if (b == NULL)
		return (0);

	length = _strlen(b);
	j = length;
	num = 0;
	for (i = 0; i < length; i++)
	{
		if (b[i] == '1')
		{
			num += (1 << j);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		j--;
	}
	return (num / 2);
}

/**
 * _strlen()- returns length of string
 * @str: the str in question
 *
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
