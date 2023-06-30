#include "main.h"
/**
 * _islower - is a function that checks for lowercase character.
 *
 * @c: The character to check
 * Return: 1 if c is lowercase
 * on error, 0 is returned
 */
int _islower(char c)
{
	if ('z' >= c && c >= 'a')
		return (1);
	else
		return (0);
}
/**
 * isseparator - is a function that checks for separators
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 *
 * @c: The character to check
 *
 * Return: 1 if c is a separators
 * on error, 0 is returned
*/
int isseparator(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; i < 13; i++)
		if (c == sep[i])
			return (1);
	return (0);
}
/**
 * cap_string - capitalizes all words of a string.
 * Separators of words: space,
 * tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 *
 * @str: the string
 *
 * Return: the changed string
*/
char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != 0; i++)
	{
		if (_islower(str[i]))
		{
			if (isseparator(str[i - 1]))
			str[i] = str[i] - ('a' - 'A');
		}
	}
	return (str);
}
