#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: the pointer to the array
 * @n: is the number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < (n / 2); i++)
	{
		x = a[i];
		a[i] = a[n - (1 + i)];
		a[n - (1 + i)] = x;
	}
}
