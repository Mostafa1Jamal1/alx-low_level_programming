#include <stdio.h>
/**
 * main - Entry point
 *
 * this code prints all possible combinations of single-digit numbers.
 * followed by a new line.
 * It is not allowed to use any variable of type char
 * only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * only use putchar four times max in your code
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
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
			n++;
		}
		else
			n++;
	}
	putchar('\n');
	return (0);
}
