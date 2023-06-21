#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: The size of the table
 *
 */

void print_times_table(int n)
{
	int x;
	int y;
	int xmy;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			xmy = x * y;
			if (xmy > 99)
			{
				_putchar((xmy / 100) + '0');
				_putchar((xmy / 10) % 10 + '0');
			}
			else if (xmy > 9 && xmy <= 99)
			{
				_putchar(' ');
				_putchar((xmy / 10) + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar((xmy % 10) + '0');
			if (y != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
