#include "main.h"

/**
 * _isalpha - is a function that checks for alphabetic character.
 *
 * @c: The character to check
 * Return: 1 if c is a letter, lowercase or uppercase
 * on error, 0 is returned
 *
 */

int _isalpha(int c)
{

	if ('z' > c && c > 'a')
		return (1);
	else if ('Z' > c && c > 'A')
		return (1);
	else
		return (0);
}
