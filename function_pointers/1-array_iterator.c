#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator()- iterates over an array
 * @array: the array in question
 * @size: size of arrray 
 * @action: function to iterate
 *
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	while (i <= size)
	{
		action(array[i]);
	}
}
