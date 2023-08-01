#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: a pointer to a head pointer.
 * The function sets the head to NULL
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
