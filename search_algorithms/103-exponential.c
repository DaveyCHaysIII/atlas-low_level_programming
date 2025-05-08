#include "search_algos.h"
#include "1-binary.c"

/**
 * exponential_search - search through and array exponentially
 * @array: the array in question
 * @size: the size of the array
 * @value: the value we are searching for
 *
 * Return: index or -1
 *
 */

int exponential_search(int *array, size_t size, int value)
{
	int bounds, low, high;

	bounds = 1;
	low = 0;
	high = 0;

	if (array[0] == value)
		return (0);
	while (bounds < (int)size && array[bounds] < value)
	{
		if (array[bounds] == value)
			return (bounds);
		low = bounds;
		bounds *= 2;
		high = bounds;
		if (bounds < 0)
			break;
	}

	return (binary_search((array + low), (high - low) - 1, value));
}
