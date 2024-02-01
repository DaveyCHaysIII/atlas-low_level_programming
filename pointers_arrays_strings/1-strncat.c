#include "main.h"

/**
 * _strncat()- concatenates two strings up to n characters
 * @dest: the main string
 * @src: the string to pull from
 * @n: the number of digits to pull
 *
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, lensrc, j, charcount, usenum;

	i = 0;
	j = 0;
	lensrc = 0;
	charcount = n;
	/*charcount = (charcount < 1) ? 1 : charcount;*/
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[lensrc] != '\0')
	{
		lensrc++;
	}
	if (lensrc > charcount)
	{
		usenum = charcount;
	}
	else
	{
		usenum = lensrc;
	}
	while (j != usenum)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
