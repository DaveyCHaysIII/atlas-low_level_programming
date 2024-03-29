#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number()- finds if its prime
 * @n: the number in question
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (_prime(n, 2));
	}
}

/**
 * _prime()- evaluates primality
 * @n: the number to eval
 * @i: the starting increment
 *
 * Return: 1 if prime, 0 if not)
 */

int _prime(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (_prime(n, ++i));
	}
}
