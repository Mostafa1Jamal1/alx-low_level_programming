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
	long double x = 1;
	long double y = 2;
	long double t;
	int num_fib = 98;
	int i;

	for (i = y; i <= num_fib; i++)
	{
		if (x == 1)
		{
			printf("%.0Lf, ", x);
		}
		printf("%.0Lf", y);
		if (i != num_fib)
			printf(", ");
		t = y;
		y = x + y;
		x = t;
	}
	printf("\n");
	return (0);
}
