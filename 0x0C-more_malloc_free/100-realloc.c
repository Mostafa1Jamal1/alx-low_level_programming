#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * the content will be copied up to the minimum of the old and new sizes
 *
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the new memory block
 *
 * Return: a pointer to the new allocated space
 * or null on fail or new_size = 0
 * if new_size = old_size return ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr, *ptrcast;
	unsigned int i;

	if (old_size == new_size)   /* Checking for equality*/
		return (ptr);
	if (ptr == 0)   /* Checking if ptr is NULL*/
		return (malloc(new_size));
	if (new_size == 0)  /* Checking if the new size = 0 */
	{
		free(ptr);
		return (0);
	}   /* Allocating the new space */
	newptr = malloc(new_size);
	if (newptr == 0)    /* Checking if it is possible to allocate*/
		return (newptr);
	/*copying the content of the old space to the new one*/
	ptrcast = (char *)ptr;
	for (i = 0; i < new_size; i++)
	{
		newptr[i] = ptrcast[i];
	}
	return (newptr);
}
