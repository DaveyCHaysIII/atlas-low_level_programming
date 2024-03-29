#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all()- sums all args
 * @n: number of args
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}

	va_start(ptr, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
