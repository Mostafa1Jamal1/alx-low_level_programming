#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * and initialize the elements value with 0.
 *
 * @nmemb: number of elements of the array
 * @size: the size of each element.
 *
 * Return: a pointer to the allocated memory
 * or NULL if failed or size = 0.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb <= 0)
		return (0);
/* check if size = 0 and return 0 when true*/
	if (size <= 0)
		return (0);
	ptr = malloc(nmemb * size); /* Allocating */
	if (ptr == 0)
		return (0);
	for (i = 0; i < nmemb * size; i++)
		*(ptr + i) = 0;
	return (ptr);
}
