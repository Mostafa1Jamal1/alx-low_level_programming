#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000
 * followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long x = 1;
	long y = 2;
	long t;
	long sum = 0;

	while (y < 4000000)
	{
		if ((y % 2) == 0)
		{
			sum = sum + y;
		}
		t = y;
		y = x + y;
		x = t;
	}
	printf("%ld\n", sum);
	return (0);

}
