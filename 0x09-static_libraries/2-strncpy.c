#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: the buffer to copy to
 * @src: the string to copy from
 * @n: at most n bytes of src are copied.
 *
 * Return: a pointer to the destination string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != 0; i++)
		*(dest + i) = *(src + i);
	for (; i < n; i++)
		*(dest + i) = 0;
	return (dest);
}
