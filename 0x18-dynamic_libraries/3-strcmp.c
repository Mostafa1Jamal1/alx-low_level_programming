#include "main.h"

/**
 * _strcmp - compares two strings.
 * function should work exactly like strcmp
 * Run man strcmp to learn more.
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: (0) if the s1 and s2 are equal
 * a negative value if s1 is less than s2
 * a positive value if s1 is greater than s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != 0 && *(s2 + i) != 0)
		i++;
	if (*(s1 + i) == *(s2 + i))
		res = 0;
	else
		res = (int)*(s1 + i) - (int)*(s2 + i);
	return (res);
}
