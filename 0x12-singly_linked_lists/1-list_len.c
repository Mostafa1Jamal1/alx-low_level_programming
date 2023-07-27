#include "lists.h"
/**
 * list_len - get the length of a linked list_t list.
 * @h: a pointer to a list_t list.
 * Return: the number of elements of h
*/
size_t list_len(const list_t *h)
{
	size_t ret = 0;
	const list_t *ptr = h;

	if (h == NULL)
		return (0);
	while (ptr->next != NULL)
    {
		ret++;
        ptr = ptr->next;
    }
	return (++ret);
}
