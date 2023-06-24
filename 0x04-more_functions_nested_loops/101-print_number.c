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
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');

}
