#include "main.h"

/**
 * print_diagonal()- print a line with length n
 * @n: how long the line is
 *
 *  Return: no return
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

