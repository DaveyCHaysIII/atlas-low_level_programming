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
	char output[] = "114433007711";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j]; 
			}
		}
	}
	return (s);
}
