#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: a pointer to the head of the list
 * @n: the value to add in the new list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{	/* Allocate memory for new node */
	dlistint_t *new = malloc(sizeof(dlistint_t));
	/* Check if allocation succeeded */
	if (new == NULL)
		return (NULL);
	/* Assign the value to the node */
	new->n = n;
	new->prev = NULL;
	/* Make the new node the head */
	if (head)
	{
		new->next = *head;
		if (*head)
			(*head)->prev = new;
		*head = new;
	}
	else
		new->next = NULL;
	return (new);
}
