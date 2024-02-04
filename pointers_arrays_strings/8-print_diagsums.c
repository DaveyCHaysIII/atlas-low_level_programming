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

	n = size;
	for (i = 0; size >= 0; i++)
	{
		suma = suma + a[n][n];
		sumb = sumb + a[n][i];
		n--;
	}
	printf("%d, %d", suma, sumb);
}
