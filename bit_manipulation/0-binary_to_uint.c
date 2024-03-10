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
	int length, i;
	unsigned int num;

	if (b == NULL)
		return (0);

	length = _strlen(b);
	num = 0;
	for (i = 0; i < length; i++)
	{
		num = num << 1;
		if (b[i] == '1')
		{
			num = num | 1;
		}
		else if (b[i] == '0')
		{
			return (0);
		}
	}
	return (num);
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
