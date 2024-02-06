#include "search_algos.h"

/**
 * print_arr - prints araay
 *
 * @array: a pointer to the first element of the array
 * @size: is the number of elements in array
 */

void print_arr(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i == (size - 1))
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
	int i = ((int)size - 1) / 2;
	int ans;

	if (!array || size == 0)
		return (-1);
	printf("Searching in array: ");
	print_arr(array, size);

	if (value == array[i])
		return (i);
	else if (value > array[i])
	{
		ans = binary_search((array + i + 1), (size - i - 1), value);
		if (ans == -1)
			return (ans);
		return (i + 1 + ans);
	}
	else
		return (binary_search(array, i, value));
}
