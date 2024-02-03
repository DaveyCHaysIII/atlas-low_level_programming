#include "main.h"

/**
 * leet()- makes your string leet
 * @s: the string in question
 *
 * Return: the string
 */

char *leet(char *s)
{
	int i, j;
	char input[] = {a, A, e, E, o, O, t, T, l, L};
	char output[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
			}
		}
	}
	return (s);
}
