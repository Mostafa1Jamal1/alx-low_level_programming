#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a pointer to a head pointer of the list
 * @idx: the index where to add the new node and starts from 0.
 * @n: the number to add in the new node.
 * Return: the address of the new node
 * or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *old;
	unsigned int i;
	/* Check if head = NULL */
	if (head == NULL || *head == NULL)
		return (NULL);
	old = *head;
	/* Create a new node with the value n */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	/* if idx == 0 modify the head */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}	/* Else Add the new node in the (idx)th node */
	else
	{
		for (i = 1; i < idx; i++)
		{	/* and Check possibility */
			old = old->next;
			if (old == NULL)
				return (NULL);
		}
		new->next = old->next;
		old->next = new;
	}
	return (new);
}
