#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers()- prints numbers
 * @separator: strint to print between numbers
 * @n: number of args
 *
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	printf("%d", va_arg(ptr, int));
	for (i = 1; i < n; i++)
	{
		printf("%s%d", separator, va_arg(ptr, int));
	}
	printf("\n");
}
