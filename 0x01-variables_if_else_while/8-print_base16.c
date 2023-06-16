#include <stdio.h>
/**
 * main - Entry point
 *
 * this code prints all the numbers of base 16 in lowercase
 * followed by a new line.
 * only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * only use putchar three times in your code
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 102)
	{
		if (n <= 57)
		{
			putchar(n);
			n++;
		}
		else if (n <= 96 && n > 57)
		{
			n++;
		}
		else
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
