#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 *
 * @str: the string to change
 *
 * Return: the string after changing
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
