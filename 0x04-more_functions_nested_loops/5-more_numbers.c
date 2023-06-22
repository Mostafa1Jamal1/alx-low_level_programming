#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 * from 0 to 14
 * followed by a new line.
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)	/* To repeat 10 times */
	{
		for (j = 0; j <= 14; j++)	/* To print the numbers from 0 to 14 */
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
