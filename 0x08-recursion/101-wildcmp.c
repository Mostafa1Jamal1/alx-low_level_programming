/**
 * movetochar - skip star till char
 *
 * @s: a pointer to char star
 *
 * Return: a pointer to the next not star char
 * null considered not star char
 */
char *movetochar(char *s)
{
	if (*s == '*')
		return (movetochar(s + 1));
	else
		return (s);
}

/**
 * cmptilllastmatch - compare till last matching
 *
 * @c1: a pointer to the char skipped till matching
 * @c2: a pointer to the char to match to
 *
 * Return: the position of the matching char starting from 1
 * if reached the end of c1 and no matching return the position of null
 */

int cmptilllastmatch(char *c1, char *c2)
{
    int x;

    if (*c1 == 0)
		return (1);
    if (*c1 != *c2)
		return (1 + cmptilllastmatch(c1 + 1, c2));
    if (*c1 == *c2)
    {
        x = cmptilllastmatch(c1 + 1, c2);
        if (*(c1 + x) == 0)
		    return (1);
        else
            return (x + 1);
    }
	return (1);
}

/**
 * wildcmp - compares two strings
 * The special char * can replace any string (including an empty string)
 *
 * @s1: the first string
 * @s2: the second string which can contain the special character *
 *
 * Return: 1 if the strings can be considered identical
 * otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	int i;
	if (*s2 == '*')
	{
		s2 = movetochar(s2);
		i = cmptilllastmatch(s1, s2);
		s1 = s1 + (i - 1);
	}
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
