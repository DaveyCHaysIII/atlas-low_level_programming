#include "main.h"

/**
 * _islower - returns 1 for c is lowercase check
 * @c: character for checking
 * Return: return 1 if c is lowercase; otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
