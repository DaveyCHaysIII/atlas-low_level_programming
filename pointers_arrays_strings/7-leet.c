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
	char input[] = "aAeEoOtTlL";
	char output[] = "4433007711";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == input[j])
			{
				i++;
			}
		}
	}
	return (s);
}
