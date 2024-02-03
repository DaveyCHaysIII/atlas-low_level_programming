#include <ctype.h>
#include "main.h"

/**
 * cap_string()- capitalize all words in string
 * @s: the string in question
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((i == 0) && (islower(s[i])))
		{
			s[i] = s[i] - 32;
		}
		if ((islower(s[i])) && (!isalnum(s[(i - 1)])))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
