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
		if ((i == 0) && (islowerletter(s[i]) < 0))
		{
			s[i] = s[i] - 32;
		}
		if ((islowerletter(s[i]) < 0) && !((s[(i - 1)] > 96 && s[(i - 1)] < 123) || ((s[(i -1)] > 64) && (s[(i - 1)] < 91))))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}

/**
 * islowerletter()- checks if c is a lower case letter
 * @c: the letter in question
 *
 */

int islowerletter(char *c)
{
	if ((*c > 96) && (*c < 123))
	{
		return (1);
	}
	return (0);
}
