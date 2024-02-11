#include "main.h"
#include <stddef.h>

/**
 * _strpbrk()- returns a pointer to a matching char
 * @s: the string in question
 * @accept: the characters looking to match
 *
 * Return: pointer to a char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
