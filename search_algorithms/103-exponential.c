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
	int bounds, low, high, result;

	bounds = 1;
	low = 0;
	high = 0;

	if (!array || !size || !value)
		return (-1);
	if (array[0] == value)
		return (0);

	while (bounds < (int)size && array[bounds] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", bounds, array[bounds]);
		low = bounds;
		bounds *= 2;
		if (bounds > (int)size - 1)
			high = size - 1;
		else
			high = bounds;
		if (bounds < 0)
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", low, high);

	result = binary_search((array + low), (high - low) + 1, value);
	if (result == -1)
		return (-1);
	else
		return (result + low);
}
