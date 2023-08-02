#include "lists.h"
/**
 * get_nodeint_at_index - get the nth node of a listint_t linked list.
 * @index: is the index of the node, starting at 0
 * @head: pointer to the head of the list
 * Return: a pointer to the nth node of a listint_t linked list.
 * or NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	ptr = head;
	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}
	return (ptr);
}
