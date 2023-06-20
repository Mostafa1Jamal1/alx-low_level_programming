#include "main.h"

/**
 * _islower - is a function that checks for lowercase character.
 *
 * @c: The character to check
 * Return: 1 if c is lowercase
 * on error, 0 is returned
 *
 */

int _islower(int c)
{

	if ('z' > c && c > 'a')
		return (1);
	else
		return (0);
}
