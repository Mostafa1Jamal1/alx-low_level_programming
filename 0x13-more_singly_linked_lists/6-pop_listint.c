#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: a pointer to a head pointer.
 * Return: the head node’s data (n).
 * or 0 if the linked list id empty.
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
