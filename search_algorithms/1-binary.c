#include "search_algos.h"

int binary_search_recursive(int *array, size_t left, size_t right, int value);
/**
 * binary_search()- the binary search algorithm
 * @array: the array we're searching
 * @size: the size of the array
 * @value: the value we're trying to find
 *
 * Return: the index that holds value, or -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return binary_search_recursive(array, 0, size - 1, value);
}

/**
 * binary_search_recursive - Helper function to perform recursive binary search
 * @array: Pointer to the array
 * @left: Left index of the current subarray
 * @right: Right index of the current subarray
 * @value: Value to search for
 *
 * Return: Index of the value, or -1 if not found
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i != left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");

	mid = left + (right - left) / 2;

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return binary_search_recursive(array, left, mid - 1, value);
	else
		return binary_search_recursive(array, mid + 1, right, value);
}
