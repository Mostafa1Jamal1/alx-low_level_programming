#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: given string
 *
 * Return: a pointer to memory sspace with the copy of the string
 * or NULL if str = NULL or in fail.
*/

char *_strdup(char *str)
{
	int strcount = 0, i;
	char *dup;

	if (*str == 0)
		return (0);
	while (*(str + strcount))
		strcount++;
	dup = (char *)malloc(strcount * sizeof(char));
	if (dup == 0)
		return (0);
	for (i = 0; i < strcount; i++)
		*(dup + i) = *(str + i);
	return (dup);
}
