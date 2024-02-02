#include "main.h"

/**
 * _strcmp()- works JUST like strcmp, compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, output;

	output = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			output = -1;
			if (s2[i] == '\0')
			{
				output = output * -1;
				break;
			}
		}
	}
	return (output);
}
