/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == 0 || cmp == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
