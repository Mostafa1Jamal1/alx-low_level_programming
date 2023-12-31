#include "lists.h"
/**
 * sum_listint - get the sum of elements of a listint_t linked list.
 * @head: pointer to the head of the list
 * Return: the sum of all the data (n)
 * or 0 if the list is empty.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
