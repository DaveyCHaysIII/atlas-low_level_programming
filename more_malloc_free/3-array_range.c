#include "main.h"
#include <stdlib.h>

/**
 * array_range()- makes an array within a range
 * @min: the min
 * @max: the max
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	unsigned int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(max - min);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
