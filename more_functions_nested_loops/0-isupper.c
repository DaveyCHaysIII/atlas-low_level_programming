#include "main.h"

/**
 * _isupper()- returns a value if c is uppercase
 *
 *@c: The character in question
 *
 * Return: 1 if c is uppercase, else 0
 *
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
