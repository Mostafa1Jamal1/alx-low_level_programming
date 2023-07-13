#include <stdlib.h>
/**
 * malloc_checked - allocates memory and check failing
 *
 * @b: the size of memory to allocate.
 *
 * Return: A pointer to the allocated memory
 * on failing cause normal process terminationwith a status value of 98
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == 0)
		exit(98);
	else
		return (ptr);
}
