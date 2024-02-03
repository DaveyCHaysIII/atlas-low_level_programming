#include "main.h"

/**
 *
 * int_strspn()- compares prefix to string
 * @s: the string in question
 * @accept: the prefix substring in question
 *
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, output;
	
	output = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				output = output;
			}
			else
			{
				output = i + 1;
				return (output);
			}
	}
	return (output);
}



