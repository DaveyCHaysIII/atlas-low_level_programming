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
	unsigned int i;
	va_list ptr;
	char c;
	int num;
	float f;
	char *str;

	va_start(ptr, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
		c = va_arg(ptr, int);
		printf("%c", c);
		break;
		case 'i':
		num = va_arg(ptr, int);
		printf("%d", num);
		break;
		case 'f':
		f = va_arg(ptr, float);
		printf("%f", f);
		break;
		case 's':
		str = va_arg(ptr, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			str = va_arg(ptr, char*);
			printf("%s", str);
		}
		break;
		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	va_end(ptr);
}
