#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all()- prints everything
 * @format: list of signifiers, c-i-f-s
 *
 * Return: no return
 */

void print_all(const char * const format, ...)
{
	unsigned int i, val;
	va_list ptr;
	char c;
	int num;
	double f;
	char *str;

	va_start(ptr, format);
	i = 0;
	while (format[i] != '\0' && va_arg(ptr, char*) != NULL)
	{
		val = 0;
		switch (format[i])
		{
		case 'c':
		c = va_arg(ptr, int);
		printf("%c", c);
		val++;
		break;
		case 'i':
		num = va_arg(ptr, int);
		printf("%d", num);
		val++;
		break;
		case 'f':
		f = va_arg(ptr, double);
		printf("%f", f);
		val++;
		break;
		case 's':
		str = va_arg(ptr, char*);
		if (str == NULL)
		{
			printf("(nil)");
			val++;
			break;
		}
		printf("%s", str);
		val++;
		break;
		}
		if (format[i + 1] != '\0' && val > 0)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
