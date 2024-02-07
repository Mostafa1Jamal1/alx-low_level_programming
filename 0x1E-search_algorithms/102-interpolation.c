#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where `value` is located
 * Or -1 If `value` is not present in `array` or if `array` is `NULL`
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;
	double sub1 = high - low, sub2;
	size_t x, i;

	if (!array)
		return (-1);

	sub2 = array[high] - array[low];
	pos = low + ((sub1 / sub2) * (value - array[low]));
	i = pos;

	if (pos > high || pos < low)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	if (value > array[pos])
		x = 1;
	else
		x = -1;

	while (i >= low && i <= high)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i += x;
	}

	return (-1);
}
