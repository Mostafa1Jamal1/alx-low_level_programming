#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string.
 *
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int count = 0;
	int i;
	char x;

	while (s[count] != 0)	/* Count the string length */
		count++;
	if (count != 0)	/* To handle the empty strings */
	{
		for (i = 0; i < (count / 2); i++)
		{
			x = s[i];
			s[i] = s[count - (1 + i)];
			s[count - (1 + i)] = x;
		}
	}
}
