#include "main.h"

/**
 * _strchr()- finds a character in a string
 * @s: the string in question
 * @c: the char in question
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
