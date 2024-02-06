#include "search_algos.h"

/**
 * print_arr_LR - prints array from L to R indexes
 *
 * @array: a pointer to the first element of the array
 * @start: the start index
 * @end: the end index
 */

void print_arr_LR(int *array, int start, int end)
{
	int i;

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i == end)
			printf("\n");
		else
			printf(", ");
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located
 * Or -1 If value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = (int)size - 1;
	int mean;

	if (!array || size == 0)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		print_arr_LR(array, start, end);

		mean = (start + end) / 2;

		if (value < array[mean])
			end = mean - 1;
		else if ((value > array[mean]))
			start = mean + 1;
		else
			return (mean);
	}
	return (-1);
}
