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
	int tmp, i;

	n--;
	while (i <= n)
	{
		tmp = a[n];
		a[n] = a[i];
		a[i] = tmp;
		i++;
		n--;
	}
}
