#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: a pointer to the head of the list
 * @n: the value to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!head)
	{
		new->prev = NULL;
		return (new);
	}
	current = *head;
	if (!current)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}
