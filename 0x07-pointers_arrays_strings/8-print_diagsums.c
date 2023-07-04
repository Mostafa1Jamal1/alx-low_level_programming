#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: pointer the first element of the two dimensiomal array
 * @size: the size of the square matrix of integers.
 */

void print_diagsums(int *a, int size)
{
	int prim = 0;
	int sec = 0;
	int i;

	for (i = 0; i < (size * size); i = i + size + 1)
	{
		prim += a[i];
	}
	for (i = (size - 1); i <= (size * (size - 1)); i = i + size - 1)
	{
		sec += a[i];
	}
	printf("%d, %d\n", prim, sec);
}
