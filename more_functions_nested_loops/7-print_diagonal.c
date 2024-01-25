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
	int i, j;

	for (i = 0; i < n; i++)
		{
		j = i;

		while (j > 0)
			{
			_putchar(' ');
			j--;
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}

