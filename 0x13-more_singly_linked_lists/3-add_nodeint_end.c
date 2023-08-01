#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: the new number to add in the new node
 * Return: the address of the new element
 * or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp = *head;
	/* Creating new node and check fail */
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	/* Check if the head is NULL */
	if (*head == NULL)
		*head = ptr;
	else
	{	/* Go to the last node and add the new node */
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ptr;
	}
	return (ptr);
}
