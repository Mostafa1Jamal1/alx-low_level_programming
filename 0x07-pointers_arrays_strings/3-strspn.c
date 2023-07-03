#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: the string to be searched
 * @accept: the string containing the characters to match
 *
 * Return: the length of a prefix substring.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int acclen;
	unsigned int len;
	unsigned int i;

	for (acclen = 0; *(accept + acclen) != 0; acclen++)
	{}
	for (len = 0; *(s + len) != 0; len++)
	{
		for (i = 0; *(accept + i) != *(s + len) && i < acclen; i++)
		{}
		if (i >= acclen)
			return (len);
	}
	return (len);
}
