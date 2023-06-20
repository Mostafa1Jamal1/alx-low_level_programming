#include "main.h"

/**
 * print_alphabet - is a function that prints the alphabet
 * in lowercase
 * followed by a new line.
 *
 * main.h must be included to use this function
 *
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c < 123; c++)
	_putchar(c);
	_putchar('\n');
}
