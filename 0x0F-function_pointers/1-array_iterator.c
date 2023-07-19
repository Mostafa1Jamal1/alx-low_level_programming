#include <stdlib.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: a pointer to the array
 * @size: the size of the array
 * @action: function pointer to execute
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == 0 || size == 0 || action == 0)
		return;
	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
