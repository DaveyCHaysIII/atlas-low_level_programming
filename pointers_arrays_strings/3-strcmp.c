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
	int sign, lens1, lens2, i, output;

	i = 0;
	sign = 1;
	lens1 = 0;
	lens2 = 0;
	output = 0;
	while (s1[lens1] != '\0')
	{
		lens1++;
	}
	while (s2[lens2] != '\0')
	{
		lens2++;
	}
	if (lens2 > lens1)
	{
		sign = -1;
	}
	for (i = 0; i < lens1; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				output = ("%d", ((s1[i] - s2[i]) * sign);
			}
			else
			{
				output = ("%d", ((s2[i] - s1[i]) * sign);
			}
		}
	}
	return (output);
}
