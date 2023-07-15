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
	unsigned int npos, dev = 1;

	/* Dealing with negative numbers */
	if (n < 0)
	{
		_putchar('-');
		npos = -n;
	}
	else
		npos = n;
	/* Count how many digits */
	while (npos / dev >= 10)
		dev *= 10;
	/* Print from biggest place */
	while (dev != 0)
	{
		_putchar((npos / dev) + '0');
		npos %= dev;
		dev /= 10;
	}
}
