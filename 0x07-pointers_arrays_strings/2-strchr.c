#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @c: the character to locate
 * @s: the string to locate in
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *ptr;

	for (i = 0; *(s + i) != 0; i++)
		if (*(s + i) == c)
		{
			ptr = (s + i);
			return (ptr);
		}
	return (0);
}

