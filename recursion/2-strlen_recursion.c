#include "main.h"

/**
 * _strlen_recursion()- gets string length recursively
 * @s: the string in question
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
