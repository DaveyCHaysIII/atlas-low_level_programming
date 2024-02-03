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
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			output = 1;
			if (s[i] != accept[j])
			{
				output = output;
			}
			else
			{
				output = 0;
				break; 
			}
		}
		if (output > 0)
		{
			return (i);
		}

	}
	return (i);
}



