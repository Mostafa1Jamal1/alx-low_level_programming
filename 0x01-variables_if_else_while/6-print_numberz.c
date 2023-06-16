#include <stdio.h>
/**
 * main - Entry point
 *
 * this code prints all single digit numbers of base 10 starting from 0
 * followed by a new line.
 * It is not allowed to use any variable of type char
 * only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * only use putchar twice in your code
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
