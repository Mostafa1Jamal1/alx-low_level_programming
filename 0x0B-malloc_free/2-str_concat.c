#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to newly allocated space in memory which
 * contains the contents of s1 followed by the contents of s2
 * and null terminated
 * or NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *str, *Nul;
	int s1count = 0, s2count = 0, i, j;
	char nulll = 0;

	Nul = &nulll;
	if (s1 == 0)
		s1 = Nul;
	if (s2 == 0)
		s2 = Nul;
	while (*(s1 + s1count))
		s1count++;
	while (*(s2 + s2count))
		s2count++;
	s2count++;
	str = (char *)malloc(sizeof(char) * (s1count + s2count));
	if (str == 0)
		return (0);
	for (i = 0; i < s1count; i++)
		*(str + i) = *(s1 + i);
	for (j = 0; j < s2count; j++)
		*(str + i + j) = *(s2 + j);
	return (str);
}
