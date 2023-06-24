#include <stdio.h>

/**
 * main - Entry point for a program that
 * finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long num = 612852475143;
	long maxpf = 0;
	long odd = 3;

	while (num % 2 == 0)
	{
		num = num / 2;
		maxpf = 2;
	}
	while (num != 1)
	{
		while (num % odd == 0)
		{
			num = num / odd;
			maxpf = odd;
		}
		odd = odd + 2;
	}
	printf("%ld\n", maxpf);
	return (0);
}
