#include "main.h"

/**
 * _strcat()- appends string dest with string src
 * @dest: the string in question
 * @src: the other string in question
 *
 * Return: return the appended string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
