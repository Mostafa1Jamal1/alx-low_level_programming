#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list.
 * @head: the head of the list
 * @index: the index of the desired node starting from 0
 * Return: the nth node of the list
 * or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
