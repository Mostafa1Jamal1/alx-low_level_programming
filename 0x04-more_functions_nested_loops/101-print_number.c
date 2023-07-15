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
	int rev = 0;
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
		n *= -1;
	}
	/* Revrese the number */
	while (n != 0)
	{
		rev += n % 10;
		if ((n / 10) != 0)
			rev *= 10;
		n /= 10;
	}
	/* Print in reverse */
	while (rev != 0)
	{
		_putchar((rev % 10) + '0');
		rev /= 10;
	}
}
