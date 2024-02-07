#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * `array` must be sorted in ascending order
 * don’t forget to compile with -lm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where `value` is located
 * Or -1 If `value` is not present in `array` or if `array` is `NULL`
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t i = 0, x = 0;

	if (array == NULL)
		return (-1);

	while (x < size && array[x] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		i = x;
		x += jump;
	}

	printf("Value found between indexes [%lu] and [%ld]\n", i, x);

	x = x < size - 1 ? x : size - 1;

	for (; i <= x; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
