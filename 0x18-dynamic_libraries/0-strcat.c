#include "main.h"

/**
 * _strcat - concatenates two strings.
 * appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 *
 * @dest: the destination string to append
 * @src: the source string to append from
 *
 * Return: pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != 0)
		i++;
	while (*(src + j) != 0)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = 0;
	return (dest);
}
