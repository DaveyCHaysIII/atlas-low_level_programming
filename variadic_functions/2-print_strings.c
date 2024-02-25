#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_null_check()- prints if not null, else prints (nil)
 * @string: the string in question
 *
 * Return: no return
 */

void print_null_check(char *string)
{
	if (string != NULL)
	{
		printf("%s", string);
	}
	else
	{
		printf("(nil)");
	}
}


/**
 * print_strings()- prints strings
 * @separator: thing separating the dang strings
 * @n: number of args
 *
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	print_null_check(va_arg(ptr, char*));
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%s", separator);
		}
		print_null_check(va_arg(ptr, char*));
	}
	printf("\n");
}
