#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int x;
	int y;
	int xmy;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			xmy = x * y;
			if (xmy > 9)
			{
				_putchar((xmy / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((xmy % 10) + '0');
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
	}

}
