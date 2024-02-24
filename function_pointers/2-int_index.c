#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index()- searches for an integer
 * @array: the array to be searched
 * @size: size of said array
 * @cmp: function to compare the ints to
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}
}
