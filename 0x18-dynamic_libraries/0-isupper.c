#include "main.h"

/**
 * _isupper - is a function that checks for uppercase character.
 *
 * @c: The character to check
 * Return: 1 if c is uppercase
 * otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
