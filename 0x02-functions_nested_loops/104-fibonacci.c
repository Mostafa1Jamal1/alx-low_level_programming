#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma
 * followed by a space
 * not allowed to hard code any Fibonacci number (except for 1 and 2)
 *
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long x = 1;
	unsigned long y = 2;
	unsigned long t;
	int num_fib = 100;
	int i;

	for (i = y; i <= num_fib; i++)
	{
		if (x == 1)
		{
			printf("%lu, ", x);
		}
		printf("%lu", y);
		if (i != num_fib)
			printf(", ");
		t = y;
		y = x + y;
		x = t;
	}
	printf("\n");
	return (0);
}
