#include <stdio.h>
/**
 * main - Entry point
 *
 * this code prints all single digit numbers of base 10 starting from 0
 * followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
