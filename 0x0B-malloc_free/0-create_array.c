#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: the size of the array.
 * @c: the character to initialize with.
 *
 * Return: a pointer to the array
 * or NULL if it fails or size = 0.
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (0);
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == 0)
		return (0);
	{
		for (i = 0; i < size; i++)
			*(ptr + i) = c;
		return (ptr);
	}
}
