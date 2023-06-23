#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * The character # used to print the triangle
 *
 * only use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 *
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)	/* loop for columns */
		{
			for (j = 0; j < size; j++)	/* loop for rows */
			{
				if (j + 1 < (size - i))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
