#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 *
 * @dest: the buffer to copy to
 * @src: the string to copy from
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (src[0] != 0)
	{
		for (i = 0; src[i] != 0; i++)
			dest[i] = src[i];
	}
	else
		dest[0] = src[0];
	return (dest);
}
