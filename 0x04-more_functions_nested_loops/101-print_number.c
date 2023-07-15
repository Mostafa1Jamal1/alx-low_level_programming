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
	unsigned int dev = 1;
	/* when n = 0 not necessary to complete */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* Dealing with negative numbers */
	if (n < 0)
	{
		_putchar('-');
		/* Check for int-min before convert to +*/
		if (n < -2147483647)
		{
			_putchar(-(n / 1000000000) + '0');
			n %= 1000000000;
		}
		/* Convert to positive */
		n *= -1;
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
