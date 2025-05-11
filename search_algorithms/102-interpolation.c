#include "search_algos.h"

/**
 * interpolation_search - search using the interpolation algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: index or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((high - low) / (array[high] - array[low])) *
		     (value - array[low]));

		if (pos > (unsigned int)size || pos > UINT_MAX)
		{
			printf("Value checked array[%lu] is out of range\n",
			       pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n",
		       pos, array[pos]);
		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
