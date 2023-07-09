#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @n: the number of bytes to copy
 * @src: the source memory area to copy from
 * @dest: the memory area to copy to
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

