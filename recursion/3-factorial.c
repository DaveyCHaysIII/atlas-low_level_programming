#include "main.h"

/**
 * factorial()- finds the factorial
 * @n: the number in question
 *
 * Return: the factorial n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}
