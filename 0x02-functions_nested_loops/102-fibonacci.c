#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma
 * followed by a space
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long x = 1;
	long y = 2;
	long t;
	int i;

	for (i = 0; i <= 50; i++)
	{
		if (x == 1)
		{
			printf("%ld, ", x);
		}
		printf("%ld, ", y);
		t = y;
		y = x + y;
		x = t;
	}
	printf("\n");
	return (0);
}
