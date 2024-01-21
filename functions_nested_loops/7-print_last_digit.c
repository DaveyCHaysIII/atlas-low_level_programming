#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the number
 * Return: returns the last digit of a number
 */

int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
		i = i * (-1);
	_putchar(i + '0');
	return (i);
}
