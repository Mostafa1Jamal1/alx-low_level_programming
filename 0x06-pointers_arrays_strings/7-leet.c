#include "main.h"

/**
 * leet - encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * only use one if in your code
 * only use two loops in your code
 * not allowed to use switch
 * not allowed to use any ternary operation
 *
 * @str: the string to encode
 *
 * Return: the string pointer after encoding
*/

char *leet(char *str)
{
	char num[] = "43071";
	char caps[] = "AEOTL";
	char smalls[] = "aeotl";
	int i;
	int j;

	for (i = 0; str[i] != 0; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == caps[j] || str[i] == smalls[j])
				str[i] = num[j];
		}
	}
	return (str);
}