#include "search_algos.h"

/**
 * linear_search - linear search algorithm in array
 * @array: pointer to array to search in
 * @size: number of elements in array
 * @value: value to be searched
 * Return: -1 if value not represented or array is NULL
 *      first index if located
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
