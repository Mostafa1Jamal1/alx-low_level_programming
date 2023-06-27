#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: the pointer of the first char in string s
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;

	return (i);
}
