#include "main.h"
#include <stdio.h>
/**
 * print_diagsums()- prints the sum of the diagonals of a 2d array
 * @a: the arr in question
 * @size: the size of the array
 *
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
	int n, i, suma, sumb;

	suma = 0;
	sumb = 0;
	n = size - 1;
	for (i = 0; n >= 0; i++)
	{
		suma = suma + a[size * i + i];
		sumb = sumb + a[size * i + n];
		n--;
	}
	printf("%d, %d\n", suma, sumb);
}
