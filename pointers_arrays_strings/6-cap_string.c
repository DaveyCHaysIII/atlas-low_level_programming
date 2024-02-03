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
	int i, j;
	int arr[] = {10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((i == 0) && (islower(s[i])))
		{
			s[i] = s[i] - 32;
		}
		if (islower(s[i]))
		{
			for (j = 0; j < 11; j++)
			{
				if (s[(i - 1)] == arr[j])
				{
					s[i] = s[i] - 32;
				}
			}
		}
	}
	return (s);
}
