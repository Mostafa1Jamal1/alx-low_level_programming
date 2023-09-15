#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: a pointer to the head of the list
 * @idx: the index of the new node
 * @n: the value of the new node
 * Return: the address of the new node
 * or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current;
	dlistint_t *new;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (!h)
		return (NULL);
	if (!*h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	current = *h;
	for (i = 0; current; i++)
	{
		if (i == idx)
		{
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
			return (new);
		}
		current = current->next;
	}
	if (i == idx)
	{
		free(new);
		new = add_dnodeint_end(h, n);
		return (new);
	}
	free(new);
	return (NULL);
}
