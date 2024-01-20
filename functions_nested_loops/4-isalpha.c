#include "main.h"

/**
 * _isalpha - checks if a letter is a letter, upper or lower
 * @c: character for checking
 * Return: return 1 if c is lowercase; otherwise return 0
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

