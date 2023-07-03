#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: the string to search in.
 * @accept: the string that contains the characters to search for.
 *
 * Return: a pointer to the byte in s that matches
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int acclen;
	unsigned int sc;
	unsigned int i;
	char *ptr;

	for (acclen = 0; *(accept + acclen) != 0; acclen++)
	{}
	for (sc = 0; *(s + sc) != 0; sc++)
	{
		for (i = 0; *(accept + i) != *(s + sc) && i < acclen; i++)
		{}
		if (i < acclen)
		{
			ptr = (s + sc);
			return (ptr);
		}
	}
	return (0);
}
