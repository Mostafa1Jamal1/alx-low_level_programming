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
	int n1;
	int n2;

	n1 = 48;	/* 0 */
	n2 = 49;	/* 1 */
	while ((n1 != 57) || (n2 != 58))	/* 9 and : */
	{
		putchar(n1);
		putchar(n2);
		n2++;
		if ((n1 + n2) != 114)
		{
			putchar(',');
			putchar(' ');
		}
		if (n2 == 58)	/* : bigger than 9 by 1 */
		{
			n1++;
			n2 = n1 + 1;
		}
	}

	putchar('\n');
	return (0);
}
