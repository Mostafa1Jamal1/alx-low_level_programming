#include "lists.h"
/**
 * dlistint_len - get the length of a linked dlistint_t list.
 * @h: a linked dlistint_t list.
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
		h = h->next;
	return (len);
}
