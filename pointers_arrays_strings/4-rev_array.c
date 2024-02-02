#include "main.h"

/**
 * reverse_array()- reverses an array of ints!
 * @a: the array in question
 * @n: the length of the array
 *
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int tmp, i, pt;

	pt = n / 2;
	for (i = 0; i <= pt; i++)
	{
		tmp = a[n];
		a[n] = a[i];
		a[i] = tmp;
		n--;
	}
}
