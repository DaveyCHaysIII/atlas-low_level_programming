#include "main.h"

int _strlen_recursion(char *s, int i);
void reverse(char *s, int len, int i);
void _puts_recursion(char *s);

/**
 * _print_rev_recursion()- recursively prints reversed string
 * @s: the string in question
 *
 * Return: no return
 */

void _print_rev_recursion(char *s)
{
	int i;
	int len;

	i = 0;
	len = _strlen_recursion(s, 0);
	reverse(s, len, i);
	-puts_recursion(s);

}

/**
 * _strlen_recursion()- gives length of a string
 * @s: the string in question
 * @i: the incremental
 *
 * Return: length i
 */

int _strlen_recursion(char *s, int i)
{
	if (s[i] != '\0')
	{
		_strlen_recursion(s + 1, i + 1)
	}
	else
	{
		return (i);
	}
}

/**
 * reverse()- reverses a string recursively
 * @s: the string in question
 * @len: the length of the string
 * @i: an initialized number
 *
 * Return: no return
 */

void reverse(char *s, int len, int i)
{
	int temp;

	if(len > i)
	{
		temp = s[len];
		s[len] = s[i];
		s[i] = temp;
		reverse(s, len--, i++);
	}
}

/**
 * _puts_recursion()- prints a string recursively
 * @s: the string in question
 *
 * Return: no return
 */

void _puts_recursion(char *s)
{
        if (s[0] != '\0')
        {       _putchar(s[0]);
                _puts_recursion(s + 1);
        }
        else
        {
                _putchar('\n');
        }
}

