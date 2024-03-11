#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary()- prints a number to binary string
 * @n: the number in question
 *
 * Return: no return
 */

void print_binary(unsigned long int n)
{
	int size, i, bit;

	size = get_tens(n);
	for (i = size - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}

/**
 * get_tens()- figures how long a binary string is
 * @n: the number in question
 *
 * Return: number of spaces big
 */

int get_tens(unsigned long int n)
{
	int j;

	j = 1;
	while ((int)n > (1 << j))
	{
		j++;
	}
	return (j);
}
