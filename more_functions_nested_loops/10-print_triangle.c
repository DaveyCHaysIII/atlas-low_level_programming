#include "main.h"

/**
 * print_triangle()- prints a triangle of a given size
 * @size: size of triangle
 *
 * Return: no return
 */

void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
	_putchar("\n");
}
else
{

for (i = size; i >= 1; i--)
{
	for (j = 1; j <= size; j++)
	{
		if (j < i)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('#');
		}
	}
	_putchar("\n");
}
}
}
