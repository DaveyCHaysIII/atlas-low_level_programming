#include "main.h"

/**
 * _isdigit()- determines if c is a digit
 *
 * @c: the number in question
 *
 * Return: 1 if yes, 0 if no
 */

int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
{
return (1);
}
return (0);
}
