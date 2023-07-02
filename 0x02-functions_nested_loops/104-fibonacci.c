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

int main()
{
	long max = 1000000000000000; /** 15 zeros*/
	long prev1 = 0;
	long prev2 = 1;
	long curr1 = 0;
	long curr2 = 2;
	long sum1 = 0;
	long sum2 = 0;
	int fib_num = 70;
	int i;
	printf("%ld, ", prev2);
	printf("%ld, ", curr2);
	for (i = 2; i < fib_num; i++)
	{
		sum2 = curr2 + prev2;
		sum1 = (sum2 / max) + curr1 + prev1;
		sum2 = sum2 % max;
		prev1 = curr1;
		prev2 = curr2;
		curr1 = sum1;
		curr2 = sum2;
		if (curr1 != 0)
			printf("%ld",curr1);
		printf("%ld",curr2);
		if (i < (fib_num - 1))
			printf(", ");
	}
	printf("\n");
	return 0;
}
