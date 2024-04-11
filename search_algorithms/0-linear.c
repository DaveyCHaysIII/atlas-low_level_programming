#include "search_algos.h"

/**
 * linear_search()- the linear search algorithm
 * @array: the arrray to search through
 * @size: the size of the array
 * @value: the value we're matching
 *
 * Return: index that holds matching value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value Checked Array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
