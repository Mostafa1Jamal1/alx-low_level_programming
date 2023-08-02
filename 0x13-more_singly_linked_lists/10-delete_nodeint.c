#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node
 * @index: the index of the node to delete
 * @head: a pointer to a head pointer of the list
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	else
	{
		ptr = *head;
		for (i = 1; i < index; i++)
		{
			ptr = ptr->next;
			if (ptr == NULL)
				return (-1);
		}
		temp = ptr->next;
		ptr->next = ptr->next->next;
		free(temp);
		return (1);
	}
}
