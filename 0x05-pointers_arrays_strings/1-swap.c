#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: the first integer
 * @b: the second integer
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
