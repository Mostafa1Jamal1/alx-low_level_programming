/**
 * strLen - get the string length
 *
 * @s: a pointer to the string
 *
 * Return: the string length
 */

int strLen(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + strLen(s + 1));
}

/**
 * charCmp - check if string is palindrome
 *
 * @c: pointer to a char
 * @oppcharpos: the position of the opposite char
 *
 * Return: 1 if palindrome
 * otherwize return 0
 */

int charCmp(char *c, int oppcharpos)
{
	if (*c == 0)
		return (1);
	if (*c == *(c + oppcharpos))
		return (charCmp(c + 1, oppcharpos - 2));
	else
		return (0);
}

/**
 * is_palindrome - check if palindrome
 *
 * @s: a pointer to the string to check
 *
 * Return: 1 if a string is a palindrome
 * and 0 if not.
 */

int is_palindrome(char *s)
{
	int len = strLen(s);

	if (len == 0)
		return (1);
	else
		return (charCmp(s, len - 1));
}
