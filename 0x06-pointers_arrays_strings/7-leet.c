#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @s: the string to encode
 *
 * Return: the string pointer after encoding
*/

char *leet(char *s)
{
	char num[] = "4433007711";
	char letters[] = "AaEeOoTtLl";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
				s[i] = num[j];
		}
	}
	return (s);
}
