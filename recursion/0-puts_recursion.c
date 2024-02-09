#include "main.h"

/**
 * _puts_recursion()- recursively puts
 * @s: the string in question
 *
 * Return: no return
 */

void _puts_recursion(char *s)
{
	_putchar(s[0]);
	if (s[0] != '\0')
	{
		_putchar(_puts_recursion(*s++));
	}
}
