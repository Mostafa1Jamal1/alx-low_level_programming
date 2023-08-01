#include "lists.h"
/**
 * listint_len - get the number of nodes in a linked listint_t list.
 * @h: a pointer to a listint_t list.
 * Return: number of elements.
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
