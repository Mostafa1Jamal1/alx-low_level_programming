#include "main.h"

/**
 * print_number - a function that prints an integer.
 * only use _putchar function to print
 * not allowed to use long
 * not allowed to use arrays or pointers
 * not allowed to hard-code special values
 *
 * @n: The number to print.
 */

void print_number(int n)
{
	int dev = 1;

	/* Dealing with negative numbers */
	if (n < 0)
	{
		_putchar('-');
		dev = -1;
	}
	/* Count how many digits */
	while (n / dev >= 10)
		dev *= 10;
	/* Print from biggest place */
	while (dev != 0)
	{
		_putchar((n / dev) + '0');
		n %= dev;
		dev /= 10;
	}
}
