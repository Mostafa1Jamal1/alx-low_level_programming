#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @needle: the substring to search for.
 * @haystack: the string to search in.
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *tmp;
	char *ret;

	if (*needle == 0)
		return (haystack);
	while (*haystack != 0)
	{
		tmp = needle;
		if (*haystack == *tmp)
		{
			ret = haystack;
			while (*haystack == *tmp)
			{
				if (*(tmp + 1) == 0)
					return (ret);
				haystack++;
				tmp++;
			}
		}
		haystack++;
	}
	return (0);
}
