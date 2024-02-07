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
	int step = sqrt(size);
	int start = 0, end = step, i = 0;

	if (!array || array[start] > value)
		return (-1);

	while (value >= array[start] && end < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
                        return (start);
		if (value <= array[end])
			break;
		start += step;
		end += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", start, end);

	while (start + i <= end && start + i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", start + i, array[start + i]);
		if (array[start + i] == value)
			return (start + i);
		i++;
	}
	return (-1);
}
