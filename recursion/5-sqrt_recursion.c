#include "main.h"

/**
 * _sqrt_recursion()- finds the sqrt recursively
 * @n: number to find sqrt for
 *
 * Return: that natural sqrt
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 0));
}

/**
 * sqrt()- the actual function that does all the work
 * @n: number to find square of
 * @i: an initialized incrementer
 *
 * Return: the square
 */

int sqrt(int n, int i);
{
	if (n < 0 || i == n)
	{
		return (-1);
	}
	else
	{
		if (i * i == n)
		{
			return (i);
		}
		else
		{
			return (sqrt(n, ++i));
		}
	}
}
