#include "main.h"

/**
 * string_toupper()- changes all lower case to upper
 * @s: the string in question
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 96) && (s[i] < 123))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
