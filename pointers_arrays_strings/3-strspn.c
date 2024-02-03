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
	unsigned int i;
	
	for (i = 0; s[i] != '\0'; i++)
		if(s[i] != accept[i])
		{
			return (i);
		}
	return (i);
}


