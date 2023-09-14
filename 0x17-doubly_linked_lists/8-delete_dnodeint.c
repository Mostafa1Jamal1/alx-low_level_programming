#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list.
 * @head: a pointer to the head of the list
 * @index: the index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;
	/* if NULL is passed */
	if (!head)
		return (-1);
	/* if empty list passed */
	if (!*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; current; i++)
	{
		if (i == index)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
	} /* index out of range */
	return (-1);
}
