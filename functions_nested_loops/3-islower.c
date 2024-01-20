#include "main.h"

/**
 * is_lower - checks to see if a given value is lowercase
 *
 * Return: 0 if c is lowercase, 1 if not
 */

int _islower(int c)
{
if( c >= 97 && c <= 122)
{
return (0);
}
else
{
return (1);
}
}
