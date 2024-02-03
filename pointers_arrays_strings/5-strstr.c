#include "main.h"

/**
 * _strstr()- finds a string in another string
 * @haystack: the string in question
 * @needle: the string to find
 *
 * Return: pointer to pos in haystack where needle lives
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, count, len;

	len = 55;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		count = 0;
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[(i + j)] == needle[j])
				{
					count++;
				}
				if (needle[(j + 1)] == '\0')
				{
					len = j + 1;
				}
			}
		}
		if (count == len)
		{
			return (haystack + i);
		}
	}
	return (haystack);
}
