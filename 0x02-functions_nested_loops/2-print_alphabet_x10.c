#include "main.h"

/**
 * print_alphabet - is a function that prints the alphabet 10 times
 * in lowercase
 * followed by a new line.
 *
 * main.h must be included to use this function
 *
 */
void print_alphabet(void)
{
	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 97; c < 123; c++)
		{
		_putchar(c);
		_putchar('\n');
		}
	}
}
