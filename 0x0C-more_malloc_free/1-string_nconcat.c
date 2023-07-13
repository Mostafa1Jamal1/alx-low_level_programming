#include <stdlib.h>
/**
 * _strlen - calculate the length of a string
 * @s: the string.
 * Return: the number of bytes of the string without the terminating NULL
*/
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != 0)
		i++;
	return (i);
}
/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: is a pointer to the first string.
 * @s2: is a pointer to the second string.
 * @n: the number of bytes that will be added from s2 to s1
 *
 * Return: a pointer to newly allocated space in memory
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * on failing return NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, i;
	char *str;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	s1len = _strlen(s1);    /*get the length of s1*/
	s2len = _strlen(s2);    /*get the length of s2*/
	/* check the value of n*/
	if (n > s2len)
		n = s2len;
	/* Allocating only the necessary space */
	str = malloc(s1len + n + 1);
	if (str == 0)
		return (0);
	/* copying s1 to str */
	for (i = 0; *(s1 + i) != 0; i++)
		*(str + i) = *(s1 + i);
	/* copying n chars from s2 to str */
	for (i = 0; i < n; i++)
		*(str + i + s1len) = *(s2 + i);
	/* Adding a terminating NULL */
	*(str + s1len + n) = 0;

	return (str);
}
