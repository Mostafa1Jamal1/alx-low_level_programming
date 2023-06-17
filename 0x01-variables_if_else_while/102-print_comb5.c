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
	int n1_1;
	int n1_2;
	int n2_1;
	int n2_2;

	n1_1 = 48;
	while (n1_1 <= 57)
	{
		n1_2 = 48;
		while (n1_2 <= 57)
		{
			n2_1 = n1_1;
			while (n2_1 <= 57)
			{
				n2_2 = n1_2 + 1;
				while (n2_2 <= 57)
				{
					putchar(n1_1);
					putchar(n1_2);
					putchar(' ');
					putchar(n2_1);
					putchar(n2_2);
					if ((n1_1 + n1_2 + n2_1 + n2_2) != 227)
					{
						putchar(',');
						putchar(' ');
					}
					n2_2++;
				}
				n2_1++;
			}
			n1_2++;
		}
		n1_1++;
	}
	putchar('\n');
	return (0);
}
