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
	int n1, n2, n3, n4;

	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 48; n2 <= 56; n2++)
		{
			for (n3 = n1; n3 <= 57; n3++)
			{
				for (n4 = n2; n4 <= 57; n4++)
				{
					putchar(n1);
					putchar(n2);
					putchar(' ');
					putchar(n3);
					putchar(n4);
					if ((n1 + n2 + n3 + n4) != 227)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
