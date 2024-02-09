#include "main.h"

/**
 * _pow_recursion()- calcs the power y of x
 * @x: the number to multiply
 * @y: the exponent
 *
 * Return: x to the y power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1))); 
	}

}
