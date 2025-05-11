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

	if (!array || size <= 0)
		return (-1);

	while (array[low] <= value && array[high] >= value)
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       low, array[low]);
				return (low);
			}
			return (-1);
		}
		pos = low + (((double)(high - low) /
		      (array[high] - array[low])) * (value - array[low]));

		if (pos > (unsigned int)size || pos > UINT_MAX)
		{
			printf("Value checked array[%lu] is out of range\n",
			       pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n",
		       pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
